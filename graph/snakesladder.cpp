#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
unordered_map<T, list<T>>mp;

public:
    
    void addedge(T u, T v, bool bidir){
        mp[u].push_back(v);
        if(bidir==true){
            mp[v].push_back(u);
        }
    }

    void print(){

        for (auto it : mp){
            cout<<it.first<<" : ";
            for(auto x:it.second){
                cout<<x<<" ";
            }

            cout<<endl;
        }
    }

};
int main(){

    Graph <int> g;

    int board[50]={0};
    board[2]=13;
    board[5]=2;
    board[9]=18;
    board[17]=-13;
    board[18]=11;
    board[20]=-14;
    board[24]=-8;
    board[25]=10;
    board[32]=-2;
    board[34]=-22;

    for(int src=0;src<=35;src++){

        for(int dice=1;dice<=6;dice++){
            int dst=src+dice+board[src+dice];
            g.addedge(src, dst, false);
        }
    }

    cout<<g.ssp(0,36)<<endl; //do this homework

    //snakes and ladder game
    int p1=0;
    int p2=0;
    int d;
    
    while(true){

        cout<<"throw dice for person 1: "<<endl; //2
        cin>>d;

        if(p1+d+board[p1+d]<36){
            p1=p1+d+board[p1+d];
            cout<<"p1 is at "<<p1<<endl;

        }
        else if(p1+d+board[p1+d]==36){
            cout<<"p1 wins the game"<<endl;
            break;
        }

        cout<<"throw dice for person 2: "<<endl; //2
        cin>>d;

        if(p2+d+board[p2+d]<36){
            p2=p2+d+board[p2+d];
            cout<<"p1 is at "<<p2<<endl;

        }
        else if(p2+d+board[p2+d]==36){
            cout<<"p2 wins the game"<<endl;
            break;
        }
}



}