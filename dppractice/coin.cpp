#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int coin(int N, vector<int>coins, int n){

    if(N==0){
        return 0;
    }
    int op=INT_MAX;
    for(int i=0;i<n;i++){
        if(N>=coins[i]){
            op=min(op,(coin(N-coins[i], coins, n)+1));
        }
    }

    
    return op;

}

int cointopdown(int N, vector<int>coins, int n, vector<int>&arr){

    if(N==0){
        return arr[N]=0;
    }

    if(arr[N]!=INT_MAX){
        return arr[N];
    }
    int op=INT_MAX;
    for(int i=0;i<n;i++){
        if(N>=coins[i]){
            op=min(op,(cointopdown(N-coins[i], coins, n, arr)+1));
        }
    }

    
    return arr[N]=op;

}








int main(){
    int N;
    cin>>N;

    int n;
    cin>>n;

    vector<int>coins={9,3,5,1};
    cout<<coin(N, coins, n)<<endl;
    vector<int>arr(N+1, INT_MAX);
    cout<<cointopdown(N, coins, n, arr)<<endl;
    // cout<<coinbottomup(N, coins, n)<<endl;

    // cout<<cointopdown(N, coins, n, arr)<<endl;
    

}