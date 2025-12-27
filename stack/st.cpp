#include <iostream>
#include <vector>
using namespace std;

class stack{
    //this is private bec we dont want to access the vector in the main and we cannot change the vector
    //st ki functionality maintained
    vector<int>v;
    
public:
    //push
    void push(int d){
        v.push_back(d);
    }

    //pop

    void pop(){
        v.pop_back();
    }

    //top

    int top(){
        return v[v.size()-1];
    }

    //empty

    bool empty(){
        return v.size()==0;
    }

    //size
    int size(){
        return v.size();
    }


};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(40);
    s.push(60);
    s.push(30);
    //st mai we can access only top or remove from the top and we cannot access the elements in btw stack
    // cout<<s.v[2]<<endl;

    s.pop();
    s.pop();
    
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;

    cout<<s.empty()<<endl;    

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}