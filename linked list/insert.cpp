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


void insertatfront(Node*&head, Node*&tail, int data){
    if(head==NULL && tail==NULL){
        Node*n=new Node(data);  // the adress of a node stored in n --> n naam ki jagah bani uska daatype node and and uska address pointer mai store hogya
        head=n;
        tail=n;// head and tail mai node ka address
    }

    else{

        Node*n=new Node(data);
        //n-->0x..300-->address of node
        //*(n)-->bucket
        // (*(n)).next=head;
        n->next=head; // agar bucket ka address hai toh arrow use krke subpart to refer kar sakte hai instead of derefering 
        //head ko n
        head=n;

    }

   

}

void print(Node*head){
    
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->d<<" ";
        temp=temp->next;

    }
}
// agar (Node*&head)--> toh head null pe chala jayega bec it was passed by reference but if not then it i spassed by value
//and in main the head will remain the same
void print2(Node*head){
    
    while(head!=NULL){
        cout<<head->d<<" ";
        head=head->next;

    }
}

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

void deleteatfront(Node*&head, Node*&tail){
    //ll is empty
    if(head==NULL){
        return;
    }
    //single node
    else if(head->next==NULL){
        delete head;
        head=NULL;
        tail=NULL;

    }

    else{
        Node*temp=head;
        head=head->next;
        delete temp;
        temp=nullptr; //no garbage 

    }

}

void deleteattail(Node*&head, Node*&tail){
    //ll is empty
    if(head==NULL){
        return;
    }
    //single node
    else if(head->next==NULL){
        delete tail;
        head=NULL;
        tail=NULL;

    }

    else{
        Node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }

        delete tail;
        tail=temp;
        tail->next=NULL;

    }
}

int main(){

    Node*head=NULL;
    Node*tail=NULL;

    insertatfront(head, tail, 40);
    insertatfront(head, tail, 50);
    insertatfront(head, tail, 60);
    insertatfront(head, tail, 70);

    insertattail(head, tail, 10);

    deleteatfront(head, tail);
    deleteattail(head, tail);

    print(head);
}

 //head and tail n ko pint karra hai 
// head=&n;
// tail=&n;