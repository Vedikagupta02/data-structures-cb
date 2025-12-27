#include<iostream>
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

void print(node*&head){
	node*temp=head;

	while(temp!=NULL){
		cout<<temp->d<<" ";
		temp=temp->next;

	}
}

int main() {
	node*head=NULL;
	node*tail=NULL;

	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		int k;
		cin>>k;

		insertattail(head, tail, k);
	}

	node*oddhead=NULL;
	node*oddtail=NULL;
	node*evenhead=NULL;
	node*eventail=NULL;

	node*temp=head;
	while(temp!=NULL){
		if(temp->d%2==0){
			insertattail(evenhead, eventail, temp->d);
		}
		else{
			insertattail(oddhead, oddtail, temp->d);
		}

		temp=temp->next;
	}

	oddtail->next=evenhead;

	print(oddhead);

	return 0;
}