#include <iostream>
using namespace std;
class node{
public:
    int d;
    node*next;

    node(int data){
        d=data;
        next=NULL;
    }

};

void insertattail(node*&head, node*&tail, int data){
    if(head==NULL && tail==NULL){
        node*n=new node(data);
        head=n;
        tail=n;

    }
    else{
        node*n=new node(data);
        tail->next=n;
        tail=n;

    }

}

node* mergetwosortedll(node*&head1, node*&head2){

    if(head1==NULL){
        return head2;
    }

    if(head2==NULL){
        return head1;
    }

    if(head1->d<head2->d){
        node*newhead=head1;
        node*x=mergetwosortedll(head1->next, head2);
        newhead->next=x;
        return newhead;
    }

    else{
        node*newhead=head2;
        node*x=mergetwosortedll(head1, head2->next);
        newhead->next=x;
        return newhead;
    }
}

node*midlell(node*&head){
    if(head==NULL){
        return NULL;

    }

    else if(head->next==NULL){
        return head;
    }

    node*slow=head;
    node*fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }

    return slow;


}

node*mergesort(node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    node*m=midlell(head);

    node*temp=m->next;
    m->next=NULL;

    node*a=mergesort(head);
    node*b=mergesort(temp);
    node*c=mergetwosortedll(head, temp);

    return c;


}

int main(){

    node*head1=NULL;
    node*head2=NULL;
    node*tail1=NULL;
    node*tail2=NULL;

    int n;
    cin>>n;
    int m;
    cin>>m;

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        insertattail(head1, tail1, k);
    }

    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        insertattail(head2, tail2, k);
    }

    node*newhead=mergetwosortedll(head1, head2);
    cout<<newhead->d<<endl;

    node*c=mergesort(newhead);
    cout<<c->d<<endl;


}