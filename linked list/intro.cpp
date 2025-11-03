#include <iostream>
using namespace std;

class Node{
public:
    //data in node
    int d;
    //address of next node in next
    Node*next;
    
    //parameterized constructor
    Node(int data){
        //d mai data
        d=data;
        //next mai NULL
        next=NULL;
    }

};

int main(){
    Node x(3);
    Node y(5);
    
    //x ke next mai y ka address
    x.next=&y;

    
    cout<<x.d<<endl;
    cout<<x.next<<endl;

    //accessing y ka data through the link made with x
    cout<<(*(x.next)).d<<endl;


}