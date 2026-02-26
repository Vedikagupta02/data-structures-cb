#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Heap{
    vector<int>v;
public:
    Heap(){
        v.push_back(-1);
    }

    void insert(int data){

        v.push_back(data);
        int child=v.size()-1;
        while(child!=1){
            int parent=child/2;
            if(v[parent]>v[child]){
                swap(v[parent],v[child]);
            }

            child=parent;
        }

    }

    void heapify(int ind){
        int minind=ind;
        int lci=minind*2;
        int rci=lci+1;
        if(lci<=v.size()-1 && v[minind]>v[lci]){
            minind=lci;
        }
        if(rci<=v.size()-1 && v[minind]>v[rci]){
            minind=rci;
        }
        if(minind!=ind){
            swap(v[minind], v[ind]);
            heapify(minind);
        }
    }

    void deleteinheap(){
        swap(v[1], v[v.size()-1]);
        v.pop_back();
        heapify(-1);
    }

    bool empty(){
        return v.size()==1;
    }

    int size(){
        return v.size()-1;
    }

    int topel(){
        return v[1];

    }


};

int main(){
//del--> del min
//koi el chhaiye --> top el 
//heap ki property hai ki u can access only top el
    Heap h;
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(17);
    h.insert(19);
    h.insert(36);
    h.insert(7);
    h.insert(25);
    h.insert(100);
    h.insert(0);

    while(!h.empty()){
        cout<<h.topel()<<" ";
        h.deleteinheap();
    }


    return 0;
}