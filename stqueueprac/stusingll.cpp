#include <iostream>
#include <vector>
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

class st{
    node*head;
    int l;

public:
    st(){
        head=NULL;
        l=0;
    }

    void push(int d){
        node*n=new node(d);
        n->next=head;
        head=n;
        l++;
    }

    void pop(){
        if(head==NULL){
            return;
        }
        node*temp=head;
        head=head->next;
        delete temp;
        temp=nullptr;
        l--;

    }

    int top(){
        if(head==NULL){
            return -1;
        }

        return head->d;
    }

    int size(){
        return l;
    }

    bool empty(){
        return head==NULL;
    }
};


int main(){

    st s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.pop();

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    


}