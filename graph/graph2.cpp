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

    void bfs(T src){

        queue<T>q;
        q.push(src);
        unordered_map<T, bool>vis; //kaun kaun queue mai dal chuka hai 
        vis[src]=true;

        while(!q.empty()){

            T x=q.front();
            q.pop();

            cout<<x<<" ";
            for(auto it : mp[x]){
                if(!vis[it]){
                    q.push(it);
                    vis[it]=true;
                }
            }

        }

    }

    void dfs(T src, unordered_map<int,bool>&visited){ //maps are passed by value by default

        cout<<src<<" ";
        visited[src]=true;

        for(auto it : mp[src]){
            if(!visited[it]){
                dfs(it, visited);

            }
        }
        

    }

    T totalcomponents(T src, unordered_map<int,bool>&visited){
        
        int componentcnt=1;

        dfs(src, visited);

        for(auto d: mp){
            if(!visited[d.first]){
                componentcnt++;
                dfs(d.first, visited);
            }
        }

        return componentcnt;
    }

};

int main(){
    Graph<int> g;

    // g.addedge("trump", "modi", true);
    // g.addedge("putin", "trump", false);
    // g.addedge("putin", "modi", false);
    // g.addedge("putin", "pope", false);
    // g.addedge("modi", "yogi", true);
    // g.addedge("prabhu", "modi", false);
    // g.addedge("yogi", "prabhu", false);
    // g.addedge("pope", "", false);

    g.addedge(0,1, true);
    g.addedge(0,4, true);
    g.addedge(1,4, true);
    g.addedge(4,3, true);
    g.addedge(1,3, true);
    g.addedge(1,2, true);
    g.addedge(3,2, true);

    g.addedge(100, 101, true);
    g.addedge(101, 102, true);
    g.addedge(100, 102, true);

    g.addedge(700, 800, true);
    g.addedge(700, 900, true);
    g.addedge(700, 180, true);

    g.print();
    // g.bfs(2);
    // unordered_map<int,bool>visited;
    // g.dfs(0, visited);

    unordered_map<int,bool>visited;
    int cnt=g.totalcomponents(0, visited);
    cout<<cnt<<endl;


}