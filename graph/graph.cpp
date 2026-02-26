#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Graph{

    list<int>*l;
    int n;
public:
    Graph(int N){
        n=N;
        l=new list<int>[N];

    }

    void addedge(int u, int v, bool bidir=true){
        l[u].push_back(v);
        if(bidir==true){
            l[v].push_back(u);

        }
    }

    void print(){

        for(int i=0;i<n;i++){
            cout<<i<<" : ";

            for(auto it : l[i]){
                cout<<it<<" ";
            }
            cout<<endl;
        }

    }

    void search(int x){

        for(auto it : l[x]){
            cout<<it<<" ";
        }

    }



};
int main(){

    Graph g(5);
    g.addedge(0,1);
    g.addedge(0,4);
    g.addedge(1,4);
    g.addedge(4,3);
    g.addedge(1,3);
    g.addedge(1,2);
    g.addedge(3,2);

    g.print();

    g.search(3);


}