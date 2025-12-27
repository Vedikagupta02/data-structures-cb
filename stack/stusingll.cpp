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

class stack{
    node*head;
    int l;

public:
    stack(){
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

    bool empty(){
        return head==NULL;
    }

    int size(){
        return l;
    }


};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(40);
    s.push(70);
    
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;


}