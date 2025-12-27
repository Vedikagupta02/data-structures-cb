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

	while (true) {
        int x;
        cin >> x;
        if (x == -1) break;
        insertattail(head, tail, x);
    }

	int pos;
	cin>>pos;

	node*temp=head;
	for(int jump=1;jump<=pos-1;jump++){
		temp=temp->next;

	}

	cout<<temp->next->d<<endl;
	return 0;
}