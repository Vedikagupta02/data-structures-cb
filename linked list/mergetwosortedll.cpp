#include <iostream>
using namespace std;
class Node{
public:
    int d;
    Node*next;
    
    Node(int data){
        d=data;
        next=NULL;
    }

};

void insertattail(Node*&head, Node*&tail, int data){
    if(head==NULL && tail==NULL){
        Node*n=new Node(data);  
        tail=n;
    }
    else{
        Node*n=new Node(data);
        tail->next=n;
        tail=n;
    }

    
}

Node*mergetwosortedll(Node*&head1, Node*&head2){
    if(head2==NULL){
        return head1;
    }

    if(head1==NULL){
        return head2;
    }

    if(head1->d < head2->d){
        Node*newHead=head1;
        Node*x=mergetwosortedll(head1->next, head2);
        newHead->next=x;
        return newHead;


    }

    else{
        Node*newHead=head2;
        Node*x=mergetwosortedll(head1, head2->next);
        newHead->next=x;
        return newHead;

    }
}
Node* middlell(Node*&head){
    Node*slow=head;
    Node*fast=head->next;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

Node*mergesort(Node*head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    Node*x=middlell(head);
    Node*temp=x->next;
    x->next=NULL;

    Node*a=mergesort(head);
    Node*b=mergesort(temp);
    Node*c=mergetwosortedll(a, b);

    return c;

}

int main(){

    // head1-->2 4 6 8 10 13 15
    // head2-->0 1 3 4 5 7


    Node*head1=NULL;
    Node*tail1=NULL;

    Node*head2=NULL;
    Node*tail2=NULL;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        insertattail(head1, tail1, k);
    }
    
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        insertattail(head2, tail2, k);
    }

    Node*h=mergetwosortedll(head1, head2);
    cout<<h<<endl;

    Node*sortedhead=mergesort(h);
    cout<<sortedhead<<endl;
    


}