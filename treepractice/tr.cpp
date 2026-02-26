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

node*buildtree(){

    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    node*root=new node(data);

    root->left=buildtree();
    root->right=buildtree();

    return root;
}

void preorder(node*root){

    if(root==NULL){
        return;
    }

    cout<<root->d<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node*root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->d<<" ";
    inorder(root->right);
    
}


void postorder(node*root){
    if(root==NULL){
        return;
    }

    
    postorder(root->left);
    postorder(root->right);
    cout<<root->d<<" ";
    
}


int cntnodofnodes(node*root){

    if(root==NULL){
        return 0;
    }

    return 1+cntnodofnodes(root->left)+cntnodofnodes(root->right);

}

int sum(node*root){

    if(root==NULL){
        return 0;
    }

    return root->d+sum(root->left)+sum(root->right);

}

int height(node*root){

    if(root==NULL){
        return 0;
    }

    return 1+max(height(root->right), height(root->left));

}

void mirror(node*root){
    if(root==NULL){
        return;
    }

    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
}

int diameter(node*root){

    if(root==NULL){
        return 0;
    }

    int op1=diameter(root->left);
    int op2=diameter(root->right);

    int op3=height(root->left)+height(root->right);

    return max(op1, max(op2, op3));

}

class diaheight{
public:
    int d;
    int h;

    diaheight(){
    h=0;
    d=0;
    }

};

diaheight diamoptimzied(node*root){

    diaheight z;

    if(root==NULL){
        return z;
    }

    diaheight x=diamoptimzied(root->left);

    diaheight y=diamoptimzied(root->right);

    z.h=1+max(x.h, y.h);
    int op1=x.d;
    int op2=y.d;
    int op3=x.h+y.h;

    z.d=max(op1, max(op2, op3));

    return z;
}

node* levelwisebuildtree(){

    int data;
    cin>>data;

    node*root=new node(data);

    queue<node*>q;
    q.push(root);

    while(!q.empty()){

        node*x=q.front();
        q.pop();

        int lc, rc;
        cin>>lc>>rc;

        if(lc!=-1){
            x->left=new node(lc);
            q.push(x->left);
        }

        if(rc!=-1){
            x->right=new node(rc);
            q.push(x->right);
        }
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

            if(x->left!=NULL){
                q.push(x->left);
            }
            if(x->right!=NULL){
                q.push(x->right);
            }
        }
    }
}
int i=0;
node* buildtreeusingpreandin(vector<int>&pre, vector<int>&in, int s, int e, int n){

    if(s>e){
        return NULL;
    }

    int x=pre[i];
    i++;
    
    int k;
    for(int p=s;p<=e;p++){
        if(x==in[p]){
            k=p;
            break;
        }

    }

    node*root=new node(x);

    root->left=buildtreeusingpreandin(pre, in, s, k-1, n);
    root->right=buildtreeusingpreandin(pre, in, k+1, e, n);

    
    return root;



}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){

    // node*root=buildtree();
    // preorder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;
    // cout<<cntnodofnodes(root)<<endl;
    // cout<<sum(root)<<endl;
    // cout<<height(root)<<endl;
    // mirror(root);
    // preorder(root);
    // cout<<endl;

    // cout<<diameter(root)<<endl;

    // diaheight ans=diamoptimzied(root);
    // cout<<ans.d<<endl;

    // node*root=levelwisebuildtree();
    // cout<<root->d<<endl;
    int n;
    cin>>n;

    vector<int>pre;
    vector<int>in;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        pre.push_back(d);
    }

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        in.push_back(d);
    }

    node*root=buildtreeusingpreandin(pre, in, 0, n-1, n);

    levelwiseprint(root);

}