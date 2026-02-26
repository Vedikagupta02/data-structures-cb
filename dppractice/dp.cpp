#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int fib(int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }

    return fib(n-1)+fib(n-2);
}

int topdownfib(int n, vector<int>&arr){

    if(n==0){
        return arr[n]=0;
    }

    if(n==1){
        return arr[n]=1;
    }

    if(arr[n]!=-1){
        return arr[n];
    }

    return arr[n]=topdownfib(n-1, arr)+topdownfib(n-2, arr);
    
}

int bottomupfib(int n){

    vector<int>arr(n+1, -1);

    

    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    

    return arr[n];


}
int main(){
    int n;
    cin>>n;

    cout<<fib(n)<<endl;

    vector<int>arr(n+1, -1);
    cout<<topdownfib(n, arr)<<endl;
    cout<<bottomupfib(n)<<endl;
    

}