#include <iostream>
#include <vector>
using namespace std;

class st{

    vector<int>v;
public:
    void push(int d){
        v.push_back(d);
    }

    void pop(){
        v.pop_back();
    }

    int top(){

        if(v.size()==0){
            return -1;
        }

        return v[v.size()-1];

    }

    bool empty(){
        return v.size()==0;
    }

    int size(){
        return v.size();
    }

    


};
int main(){

    st obj;

    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);

    obj.pop();

    while(!obj.empty()){
        cout<<obj.top()<<" ";
        obj.pop();
    }


}