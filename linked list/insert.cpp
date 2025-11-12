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

int lengthll(Node*&head){
    int cnt=0;
    Node*temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

int lengthusingrec(Node*head){

    if(head==NULL){
        return 0;
    }

    return 1+lengthusingrec(head->next);
}

void insertatanyposinbtw(Node*&head, Node*&tail, int data, int pos){
    int n=lengthll(head);
    if(pos==0){
        insertatfront(head, tail, data);
    }

    else if(pos>=n){
        insertattail(head, tail, data);
    }

    else{
        Node*n=new Node(data); //new node created
        
        Node*temp=head;
        for(int jump=1;jump<=pos-1;jump++){
            temp=temp->next;
            

        }
        n->next=temp->next;
        temp->next=n;
    }
}

void deleteatanyposbtw(Node*&head, Node*&tail, int pos){
    int n=lengthll(head);
    if(pos==0){
        deleteatfront(head, tail);
    }
    else if(pos>=n-1){
        deleteattail(head, tail);
    }
    else{
        Node*temp=head;
        for(int jump=1;jump<=pos-1;jump++){
            temp=temp->next;
        }

        Node*temp2=temp->next;
        temp->next=temp->next->next;
        delete temp2;
        temp2=nullptr;
    }


}

bool search(Node*&head, int key){
    if(head==NULL){
        return false;
    }

    Node*temp=head;
    while(temp!=NULL){
        if(temp->d==key){
            return true;
        }
        temp=temp->next;
        

    }
    return false;
}

bool searchusingrec(Node*head, int key){
    if(head==NULL){
        return false;
    }

    if(head->d==key){
        return true;
    }

    return searchusingrec(head->next, key);
}

void bubble(Node*&head){
    int n=lengthll(head);
        for(Node* temp=head;temp->next!=NULL;temp=temp->next){
            if(temp->d>temp->next->d){
                swap(temp->d, temp->next->d);
                
            }
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

Node* reverse(Node*&head){

    Node*curr=head;
    Node*prev=NULL;
    
    while(curr!=NULL){
        Node*aagewalapointer=curr->next;
        curr->next=prev;
        prev=curr;
        curr=aagewalapointer;
    }

    
    return prev;


}

Node*reverserec(Node*&head, Node*curr, Node*prev){
    if(curr==NULL){
        return head;
    }

    Node*aagewalapointer=curr->next;
    curr->next=prev;

    return reverserec(head, aagewalapointer, curr);

    head=prev;
    return head;

    
}

Node*pivot(Node*head, int pivot){

    Node*temp=head;
    while(temp->next->d!=pivot){
        temp=temp->next;
    }

    Node*newHead=temp->next;
    temp->next=NULL;
    Node*gr=reverse(head);
   

    Node*gg=reverse(newHead);

    head->next=gg;

    return gr;


}

Node* kdistfromend(Node*head, int pos){
    Node*x=head;
    Node*y=head;

    for(int jump=1;jump<=pos;jump++){
        y=y->next;
    }

    while(y!=NULL){
        x=x->next;
        y=y->next;
    }

    return x;

}



int main(){

    Node*head=NULL;
    Node*tail=NULL;

    insertatfront(head, tail, 1);
    insertatfront(head, tail, 2);
    insertatfront(head, tail, 3);
    insertatfront(head, tail, 4);
    insertatfront(head, tail, 5);
    insertatfront(head, tail, 6);
    insertatfront(head, tail, 7);
    insertatfront(head, tail, 8);


    // insertattail(head, tail, 5);


    // insertatanyposinbtw(head, tail, 45, 2);

    // deleteatfront(head, tail);
    // deleteattail(head, tail);
    // print(head);
    // // deleteatanyposbtw(head, tail, 3);
    // cout<<endl;

    // print(head);
    // cout<<endl;

    // cout<<searchusingrec(head, 24);

    // bubble(head);

    // Node*q=middlell(head);
    // cout<<q->d<<endl;
    // print(head);

    // Node*newHead=reverserec(head, head, NULL);
   
    // cout<<endl;
    // print(newHead);
    // cout<<newHead->d<<endl;


    
    // Node*newnodee=kdistfromend(head, 5);
    // cout<<newnodee->d<<endl;

    Node*newheadd=pivot(head, 3);
    print(newheadd);
    
    
}

 //head and tail n ko pint karra hai 
// head=&n;
// tail=&n;