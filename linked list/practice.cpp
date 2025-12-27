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

void insertathead(node*&head, node*&tail, int data){

    if(head==NULL && tail==NULL){
        node*n=new node(data);
        head=n;
        tail=n;

    }
    else{
        node*n=new node(data);
        n->next=head;
        head=n;

    }
}

void print(node*head){

    while(head!=NULL){
        cout<<head->d<<endl;
        head=head->next;
    }

}

void printref(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->d<<endl;
        temp=temp->next;
    }

}

int lengthll(node*&head){
    node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;

}
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

void insertinbtw(node*&head, node*&tail, int data, int pos){
    int n=lengthll(head);
    if(pos==0){
        insertathead(head, tail, data);
    }

    else if(pos>=n){
        insertattail(head, tail, data);
    }

    else{
        node*n=new node(data);
        node*temp=head;

        for(int jump=1;jump<=pos-1;jump++){
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;

    }
}


void deltathead(node*&head, node*&tail){

    if(head==NULL && tail==NULL){
        return;

    }
    else if(tail->next==NULL){
        delete tail;
        head=NULL;
        tail=NULL;
    }
    else{
        node*temp=head;
        head=head->next;
        delete temp;
        temp=nullptr;

    }
}

void deleteattail(node*&head, node*&tail){

    if(head==NULL && tail==NULL){
        return;

    }

    else if(tail->next==NULL){
        delete tail;
        head=NULL;
        tail=NULL;
    }

    else{
        node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }

        node*to=temp->next;
        temp->next=NULL;
        delete to;
        to=nullptr;

    }
}


void delinbtw(node*&head, node*&tail, int pos){
    int n=lengthll(head);
    if(pos==0){
        deltathead(head, tail);
    }

    else if(pos>=n){
        deleteattail(head, tail);
    }

    else{

        node*temp=head;
        for(int jump=1;jump<=pos-1;jump++){
            temp=temp->next;
        }

        node*to=temp->next;
        temp->next=to->next;
        delete to;
        to=nullptr;
        

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

node*reversell(node*&head){
    node*prev=NULL;
    node*curr=head;

    while(curr!=NULL){
        node*agla=curr->next;
        curr->next=prev;
        prev=curr;
        curr=agla;

    }

    return prev;
}

node*reversellrec(node*&head, node*prev, node*curr){

    if(curr==NULL){
        return prev;
    }

    node*agla=curr->next;
    curr->next=prev;

    return reversellrec(head, curr, agla);

}

bool search(node*head, int key){

    if(head==NULL){
        return false;
    }

    if(head->d==key){
        return true;
    }

    return search(head->next, key);


}

void bubble(node*head){
    int n=lengthll(head);

    for(int j=0;j<=n-2;j++){
        for(node*temp=head;temp->next!=NULL;temp=temp->next){

            if(temp->d>temp->next->d){
                swap(temp->d, temp->next->d);
            }
        }
    }
}

int main(){

    // node x(10);    

    // node y(20);

    // x.next=&y;
    // cout<<x.d<<endl;
    // // cout<<(*(x.next)).d<<endl;
    // cout<<x.next->d<<endl;

    node*head=NULL;
    node*tail=NULL;

    insertathead(head, tail, 20);
    insertathead(head, tail, 10);
    insertattail(head, tail, 30);
    insertattail(head, tail, 40);
    insertattail(head, tail, 50);
    insertattail(head, tail, 60);
    insertattail(head, tail, 70);
    // deltathead(head, tail);

    node*mid=midlell(head);
    cout<<"Middle element is: "<<mid->d<<endl;

    // insertinbtw(head, tail, 25, 3);
    print(head);
    // printref(head);

    node*revhead=reversellrec(head,NULL , head);
    cout<<"Reversed linked list is: "<<endl;
    print(revhead);

    cout<<search(head, 50)<<endl;

    bubble(head);
    cout<<"Sorted linked list is: "<<endl;
    print(head);



}