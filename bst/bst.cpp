#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int d;
    node*left;
    node*right;


    node(int data){
        d=data;
        left=NULL;
        right=NULL;
    }

};

node*insertinbst(node*root, int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }

    else if(data>root->d){
        //right subtree insert
        root->right=insertinbst(root->right, data);
        return root;

    }
    else{
        //left subtree insert
        root->left=insertinbst(root->left, data);
        return root;
    }
}
void levelwiseprint(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
    node*x=q.front();
    q.pop();

    if(x==NULL){
        cout<<endl;
        if(!q.empty()){
        q.push(NULL);
        }

    }                                 
    else{
    cout<<x->d<<" "; //print root
    if(x->left!=NULL){
        q.push(x->left);
    }
    if(x->right!=NULL){
        q.push(x->right);
    }
        }
    }
    
    
}

node*buildbst(){
    
    node*root=NULL;
    int data;
    cin>>data;

    while(data!=-1){
        root=insertinbst(root, data);
        cin>>data;
    }

    return root;
}

bool searchinbst(node*root, int key){

    if(root==NULL){
        return false;
    }

    if(root->d==key){
        return true;
    }

    else if(root->d<key){
        return searchinbst(root->right, key);
    }

    else{
        return searchinbst(root->left, key);
    }



}
//increasing range
void noinrange1(node*root, int k1, int k2){
    if(root==NULL){
        return;
    }
    //we follow inorder traversal for sorted order
    noinrange1(root->left, k1, k2);

    if(root->d>=k1 && root->d<=k2){
        cout<<root->d<<endl;
    }

    
    noinrange1(root->right, k1, k2);
}

//decreasing range
void noinrange2(node*root, int k1, int k2){
    if(root==NULL){
        return;
    }
    //we follow inorder traversal for sorted order
    noinrange2(root->right, k1, k2);
    noinrange2(root->left, k1, k2);

    if(root->d>=k1 && root->d<=k2){
        cout<<root->d<<endl;
    }

    
    
}

class pa{
public:
    int height;
    bool balanced;

    pa(){
        height=0;
        balanced=true;
    }

};
//this is an O(n) solution instead of O(n^2) which is brute force solution
pa isbalanced(node*root){
    pa l;

    if(root==NULL){
        return l;
    }

    pa x=isbalanced(root->left);
    pa y=isbalanced(root->right);

    l.height=max(x.height, y.height)+1;

    if(x.balanced && y.balanced && abs(x.height - y.height)<=1){
        l.balanced=true;
    }
    else{
        l.balanced=false;
    }
    

    return l;



}

bool checkbst(node*root, int min=INT_MIN, int max=INT_MAX){

    if(root==NULL){
        return true;
    }

    if(root->d>=min && root->d<max && checkbst(root->left, min, root->d) && checkbst(root->right, root->d+1, max)){
        return true;
    }
    return false;
}



node*buildbstusingsirtedarray(int start, int end, int arr[]){

    if(start>end){
        return NULL;
    }

    int mid=(start+end)/2;

    node*root=new node(arr[mid]);
    root->left=buildbstusingsirtedarray(start, mid-1, arr);
    root->right=buildbstusingsirtedarray(mid+1, end, arr);

    return root;


}

class linkl{
public:

    node*head;
    node*tail;

    linkl(){
        head=NULL;
        tail=NULL;
    }

};

linkl convertbstintosortedll(node*root){

    linkl L;
    //base case
    if(root==NULL){
        return L;
    }

    //rec case
    //case 1 : neither lst and rst
    if(root->left==NULL && root->right==NULL){
        L.head=root;
        L.tail=root;

        return L;

    }

    //case 2: only lst exist not rst
    else if(root->left!=NULL && root->right==NULL){
        linkl le=convertbstintosortedll(root->left);
        le.tail->left=root;
        root->left=NULL;
        root->right=NULL;
        L.head=le.head;
        L.tail=root;
        return L;

    }

    //case 3: only rst exist not lst
    else if(root->left==NULL && root->right!=NULL){
        linkl re=convertbstintosortedll(root->right);
        root->left=re.head;
        root->right=NULL;
        L.head=root;
        L.tail=re.tail;
        return L;
        
    }

    //case 4: both lst rst exist
    else{
        linkl le=convertbstintosortedll(root->left);
        linkl re=convertbstintosortedll(root->right);

        le.tail->left=root;
        root->left=re.head;
        root->right=NULL;

        L.head=le.head;
        L.tail=re.tail;

        return L;

    }


}

void printll(node*&head){
    node*temp=head;
    while(temp!=NULL){
       
        cout<<temp->d<<" ";
        temp=temp->left;
    }
}

node*delinbst(node*root, int key){
    if(root==NULL){
        return NULL;
    }

    //key in lst
    if(key<root->d){
        root->left=delinbst(root->left, key);
        return root;

    }

    //key in rst
    else if(key>root->d){
        root->right=delinbst(root->right, key);
        return root;

    }

    //key is root
    else{
        //root ka no left ya right
        if(root->right==NULL && root->left==NULL){
            delete root;
            return NULL;
        }

        //root ka left exist and irght ni krta
        else if(root->left!=NULL && root->right==NULL){
            node*temp=root->left;
            delete root;
            root=temp;
            return root;
        }
        
        //root ka left ni hai bs right hai 
        else if (root->left==NULL && root->right!=NULL){
            node*temp=root->right;
            delete root;
            root=temp;
            return root;
        }

        //both exist
        else{

            //choosing max of lst
            // node*temp=root->left;

            // while(temp->right!=NULL){
            //     temp=temp->right;
            // }

            // swap(root->d, temp->d);
            // root->left=delinbst(root->left, key);
            // return root;

            //choosing min of rst 

            node*temp=root->right;
            while(temp->left!=NULL){
                temp=temp->left;
            }

            swap(root->d, temp->d);
            root->right=delinbst(root->right, key);
            return root;
        }



    }
}

//right view of bst 

void rightview(node*root, int currlevel, int &maxlvlptr){

    if(root==NULL){
        return;
    }
    if(maxlvlptr<currlevel){
        cout<<root->d<<endl;
        maxlvlptr++;
    }

    rightview(root->right, currlevel+1, maxlvlptr);
    rightview(root->left, currlevel+1, maxlvlptr);



}

void leftview(node*root, int currlevel, int &maxlvlptr){

    if(root==NULL){
        return;
    }
    if(maxlvlptr<currlevel){
        cout<<root->d<<endl;
        maxlvlptr++;
    }

    leftview(root->left, currlevel+1, maxlvlptr);
    leftview(root->right, currlevel+1, maxlvlptr);



}
// 8 10 14 3 13 6 1 7 4 -1

int main(){
    // int arr[]={1,2,3,4,5,6,7,8};
    // int n=sizeof(arr)/sizeof(int);

    // node*root=buildbstusingsirtedarray(0, n-1, arr);
    // levelwiseprint(root);

    node*root=buildbst();
    // delinbst(root, 6);
    // linkl L=convertbstintosortedll(root);
    // printll(L.head);
    
    int k=0;
    leftview(root, 1, k);
    // levelwiseprint(root);

    // cout<<searchinbst(root, 6)<<endl;

    // noinrange1(root, 6, 10);
    // noinrange2(root, 6, 10);

    // pa z=isbalanced(root);
    // cout<<z.height<<endl;
    // cout<<z.balanced<<endl;




}