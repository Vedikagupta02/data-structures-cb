#include <iostream>
#include <vector>
using namespace std;

class queue{
    
    vector<int>v;
    
public:
    //push
    void push(int d){
        v.push_back(d);
    }

    //pop

    void pop(){
        v.erase(v.begin());
    }

    //top

    int top(){
        return v[0];
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