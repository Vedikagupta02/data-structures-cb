#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int d;
    node*right;
    node*left;

    node(int data){
        d=data;
        left=NULL;
        right=NULL;
    }

};

node*insertinthebst(node*root, int data){

    if(root==NULL){
        root=new node(data);
        return root;
    }

    else if(data<root->d){
        root->left=insertinthebst(root->left, data);
        return root;
    }
    else{
        root->right=insertinthebst(root->right, data);
        return root;
    }
}

node* buildbst(){

    node*root=NULL;
    int data;
    cin>>data;

    while(data!=-1){
        root=insertinthebst(root, data);
        cin>>data;
    }
    return root;


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
            cout<<x->d<<" ";
            if(x->left){
                q.push(x->left);
            }
            if(x->right){
                q.push(x->right);
            }
            
        }
    }

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

void increasingorder(node*root){
    if(root==NULL){
        return;
    }

    increasingorder(root->left);
    cout<<root->d<<" ";
    increasingorder(root->right);
}

void decreasingorder(node*root){
    if(root==NULL){
        return;
    }

    decreasingorder(root->right);
    cout<<root->d<<" ";
    decreasingorder(root->left);
    
    
}

class balance{
public:
    int height;
    bool check;

    balance(){
        height=0;
        check=true;
    }

};

balance checkbalanced(node*root){

    balance b;

    if(root==NULL){
        return b;
    }

    balance x=checkbalanced(root->left);
    balance y=checkbalanced(root->right);

    b.height=1+max(x.height,y.height);
    if(x.check==true && y.check==true && abs(x.height-y.height)<=1){
        b.check=true;
    }
    else{
        b.check=false;
    }

    return b;



}

bool checkbst(node*root, int maxi=INT_MAX, int mini=INT_MIN){
    if(root==NULL){
        return true;
    }

    if(root->d<maxi && root->d>=mini && checkbst(root->left, root->d, mini) && checkbst(root->right, maxi, root->d+1)){
        return true;
    }
    return false;

}

node*buildusinggivensortedarray(vector<int>&arr, int s, int e){
    if(s>e){
        return NULL;
    }

    int mid=(s+e)/2;

    node*root=new node(arr[mid]);

    root->left=buildusinggivensortedarray(arr, s, mid-1);
    root->right=buildusinggivensortedarray(arr, mid+1, e);

    return root;
}

class link{
public:
    node*head;
    node*tail;

    link(){
        head=NULL;
        tail=NULL;
    }

};

link flattenabst(node*root){

    link L;

    if(root==NULL){
        return L;
    }

    if(root->right==NULL && root->left==NULL){
        L.head=root;
        L.tail=root;

        return L;
    }

    else if (root->right==NULL && root->left!=NULL){

        link le=flattenabst(root->left);
        le.tail->left=root;
        root->left=NULL;
        root->right=NULL;

        L.head=le.head;
        L.tail=root;

        return L;
    }

    else if(root->left==NULL && root->right!=NULL){

        link re=flattenabst(root->right);
        root->left=re.head;
        root->right=NULL;

        L.head=root;
        L.tail=re.tail;

        return L;
    }

    else{
        link le=flattenabst(root->left);
        link re=flattenabst(root->right);

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

void leftview(node*root, int currlvl, int &maxlvlprint){
    if(root==NULL){
        return;
    }

    if(currlvl>maxlvlprint){
        cout<<root->d<<" ";
        maxlvlprint++;
    }

    leftview(root->left, currlvl+1, maxlvlprint);
    leftview(root->right, currlvl+1, maxlvlprint);
}

void rightview(node*root, int currlvl, int &maxlvlprint){
    if(root==NULL){
        return;
    }

    if(currlvl>maxlvlprint){
        cout<<root->d<<" ";
        maxlvlprint++;
    }
    
    rightview(root->right, currlvl+1, maxlvlprint);
    rightview(root->left, currlvl+1, maxlvlprint);
    
}

node*deleteinbst(node*root, int key){
    if(root==NULL){
        return NULL;
    }

    if(root->d==key){

        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        else if(root->left!=NULL && root->right==NULL){
            node*temp=root->left;
            delete root;
            root=temp;
            return root;

        }
        else if(root->left==NULL && root->right!=NULL){
            node*temp=root->right;
            delete root;
            root=temp;
            return root;
        }
        else{
            node*temp=root->left;
            while(temp->right!=NULL){
                temp=temp->right;
            }

            swap(root->d, temp->d);

            root->left=deleteinbst(root->left, temp->d);
            return root;
        }
    }
    else if(root->d<key){
        return root->right=deleteinbst(root->right, key);
    }
    else{
        return root->left=deleteinbst(root->left, key);
    }
}
int main(){

    node*root=buildbst();
    node*newroots=deleteinbst(root, 8);

    levelwiseprint(newroots);

    // link L=flattenabst(root);
    // printll(L.head);
    // int k=0;
    // leftview(root, 1, k);
    // cout<<endl;
    // int l=0;
    // rightview(root, 1, l);

    // cout<<searchinbst(root, 10)<<endl;

    // decreasingorder(root);
    // cout<<endl;
    // increasingorder(root);
    // cout<<endl;

    // balance b=checkbalanced(root);

    // cout<<b.check<<endl;

    // cout<<checkbst(root)<<endl;

    // int n;
    // cin>>n;

    // vector<int>arr;

    // for(int i=0;i<n;i++){
    //     int d;
    //     cin>>d;

    //     arr.push_back(d);
    // }

    // node*root=buildusinggivensortedarray(arr, 0, n-1);
    // cout<<root->d<<endl;


}