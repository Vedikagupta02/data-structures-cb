#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(priority_queue<int, vector<int>, greater<int>>q){
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    priority_queue<int, vector<int>, greater<int>>q; 

    int k;
    cin>>k;

    int d;
    cin>>d;

    int cnt=0;

    if(cnt<k){

        q.push(d);
        cnt++;
    }

    else{
        if(d==-1){
            print(q);
        }
        else{
            if(q.top()<d){
                q.pop();
                q.push(d);
            }
        }
    }

}
