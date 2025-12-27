#include <iostream>
using namespace std;
class circularq{
    int *arr;
    int f;
    int b;
    int cs;
    int ms;

public:
    circularq(int n=5){
        arr=new int[n];
        f=0;
        //bec in push func we have to do b=b+1 to push at the first element
        b=-1;
        cs=0;
        ms=n;


    }

    void push(int d){
        if(cs<ms){
            b=(b+1)%ms;
            arr[b]=d;
            cs++;
        }
        else{
            cout<<"overflow"<<endl;
        }
    }

    void pop(){
        if(cs>0){
            f=(f+1)%ms;
            cs--;

        }
        else{
            cout<<"underflow"<<endl;
        }
    }
    
    int front(){
        return arr[f];
        
    }
    bool empty(){
        return cs==0;
    }

    int size(){
        return cs;
    }
};
int main(){
    circularq q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    while(!q.empty()){
        cout<<q.front()<<endl;
    }

}