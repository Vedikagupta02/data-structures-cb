#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int>>q; //for min heap, by default it is max heap

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(17);
    q.push(19);
    q.push(36);
    q.push(7);
    q.push(25);
    q.push(100);

    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }

}