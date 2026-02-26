#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int, vector<int>, greater<int>>q; 

    int n;
    cin>>n; //100
    
    int k;
    cin>>k;

    int cnt=0;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        
        if(cnt<k){

            q.push(d);
            cnt++;
        }

        else{
            if(q.top()<d){
                q.pop();
                q.push(d);
            }
        }
    }

    cout<<q.top()<<endl;


}