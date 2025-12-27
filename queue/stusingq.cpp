#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class stackk{
    queue<int>q1;
    queue<int>q2;
public:
    void push(int d){

        if(q1.empty() && q2.empty()){
            q1.push(d);
        }
        else if(!q1.empty() && q2.empty()){
            q1.push(d);
        }
        else{
            q2.push(d);
        }

    }

    void pop(){
        if(q1.empty() && q2.empty()){
            return;
        }

        else if(!q1.empty() && q2.empty()){
            while(q1.size()>1){
                q2.push(q1.front());
                q1.pop(); 
            }
            q1.pop();
        }
        else{
            while(q2.size()>1){
                q1.push(q2.front());
                q2.pop(); 
            }
            q2.pop();


        }

        

    }
    
    int top(){
        if(q1.empty() && q2.empty()){
            return -1;
        }

        else if(!q1.empty() && q2.empty()){
            while(q1.size()>1){
                q2.push(q1.front());
                q1.pop(); 
            }
            return q1.front();
            q2.push(q1.front());
            q1.pop();
            
        }
        else{
            while(q2.size()>1){
                q1.push(q2.front());
                q2.pop(); 
            }
            return q2.front();
            q1.push(q2.front());
            q2.pop();


        }

    }
    bool empty(){

        return q1.size()+q2.size()==0;
    }
    int size(){

        return q1.size()+q2.size();

    }

};
int main(){
    stackk s;
    s.push(13);
    s.push(23);
    s.push(43);
    s.push(53);
    s.push(63);
    s.pop();
    s.push(8);
    s.pop();
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty();

}