#include <iostream>
using namespace std;

class Node{
public:
    int d;
    Node*prev;
    Node*next;

    Node(int data){
        d=data;
        prev=NULL;
        next=NULL;

    }

};

void insertfront(Node*&head, Node*&tail, int data){

    if(head==NULL && tail==NULL ){
        Node*n=new Node(data);
        head=n;
        tail=n;

    }

    else{
        Node*n=new Node(data);
        n->next=head;
        head->prev=n;
        head=n;
    }

}


void inserttail(Node*&head, Node*&tail, int data){

    if(head==NULL && tail==NULL ){
        Node*n=new Node(data);
        head=n;
        tail=n;

    }

    else{
        Node*n=new Node(data);
        tail->next=n;
        n->prev=tail;
        tail=n;
    }

}
void print(Node*head){
    
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->d<<" ";
        temp=temp->next;

    }
}
 
int main(){

    Node*head=NULL;
    Node*tail=NULL;

    insertfront(head, tail, 10);
    inserttail(head, tail, 90);

    print(head);



}