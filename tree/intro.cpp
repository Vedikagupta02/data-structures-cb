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
node*buildbinarytree(){
        //hum bs root pe kaam krte hai baaki recusrion krega
        int data;
        cin>>data;
        
        //base case
        if(data==-10){
            return NULL;
        }
        
        //new node we are making-->the new node
        node*n = new node(data);
        //node ka left ka address recursion dega
        n->left=buildbinarytree();
        //node k aleft ka address recursion dega
        n->right=buildbinarytree();

        return n;
    }

void preorder(node*root){ //root left right
    if(root==NULL){
        return;
    }

    cout<<root->d<<" ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(node*root){ //left root right
    if(root==NULL){
        return;
    }

    preorder(root->left);
    cout<<root->d<<" ";
    
    preorder(root->right);

}

void postorder(node*root){ // left right root 
    if(root==NULL){
        return;
    }

    preorder(root->left);
    
    preorder(root->right);
    cout<<root->d<<" ";

}

int cntnodes(node*root){
    if(root==NULL){
        return 0;
    }

    return 1+cntnodes(root->left)+cntnodes(root->right);
    


}

int sum(node*root){

    if(root==NULL){
        return 0;
    }

    return root->d+cntnodes(root->left)+cntnodes(root->right);



}

int height(node*root){
    if(root==NULL){
        return 0;
    }

    return 1+max(height(root->left), height(root->left));
}

void mirror(node*root){
    if(root==NULL){
        return;

    }

    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);

}
//height=nodes
//diameter=edges/links
int diameter(node*root){
    //diameter is the no of links --> not the no of nodes
    //leaf node--diameter=0
    if(root==NULL){
        return 0;
    }
    
    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->right)+height(root->right); //O(n) -->this leads to O(n^2) complexity

    return max(op3, max(op1, op2));
    //the time complexity is O(n^2)



}
//diameter optimized

class Q{
public:
    int h;
    int d;

    Q(){
        h=0;
        d=0;
    }
};

Q diameteroptimized(node*root){
    Q z;

    if(root=NULL){
        return z;
    }

    Q x=diameteroptimized(root->left);
    Q y=diameteroptimized(root->right);

    //here recursion is not being called bt in the prev code recursion was called multiple times
    //so we reduce the time complexity to O(n)
    z.h=1+max(x.h, y.h);
    int op1=x.d;
    int op2=y.d;
    int op3=x.h+y.h;
    z.d=max(op3, max(op1, op2));
    return z;


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



node* levelwisebuild(){
    

    cout<<"take data for root"<<endl;
    int data;
    cin>>data;

    node*root=new node(data);

    queue<node*>q;
    q.push(root);

    while(!q.empty()){

        node*x=q.front();
        q.pop();

        cout<<"enter left and right for "<<x->d<<endl;
        int lc, rc;
        cin>>lc>>rc;
        
        if(lc=-1){
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

int i=0;
node*buildtreeprein(int s, int e, int pre[], int in[]){

    if(s>e){
        return NULL;
    }
    int x=pre[i];
    i++;
    
    int k;
    for(int l=s;l<=e;l++){
        if(in[l]==x){
            k=l;
            break;

        }


    }

    node*root= new node(x);

    root->left=buildtreeprein(s, k-1, pre, in);
    root->right=buildtreeprein(k+1, e, pre, in);
    return root;
}

int main(){

    node*root=levelwisebuild();

    preorder(root);
    inorder(root);
    postorder(root);

    cout<<cntnodes(root)<<endl;
    cout<<sum(root)<<endl;
    cout<<height(root)<<endl;
    int n;
    cin>>n;
    vector<int>v;
    vector<int>a;
    //preorder input
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    //inorder input
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // buildquestiontree(0, n-1, a, v, n);


}