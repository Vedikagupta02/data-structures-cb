#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minsteps(int n){

    if(n==1){
        return 0;
    }

    int op1= minsteps(n-1);
    int op2=INT_MAX;
    int op3=INT_MAX;
    if(n%2==0){
         op2=minsteps(n/2);
    }

    if(n%3==0){
         op3=minsteps(n/3);
    }

    return 1+min(op1, min(op2, op3));

}

int minstepstd(int n, int*&arr){

    if(n==1){
        return arr[n]=0;
    }

    if(arr[n]!=-1){
        return arr[n];
    }

    int op1= minsteps(n-1);
    int op2=INT_MAX;
    int op3=INT_MAX;
    if(n%2==0){
         op2=minsteps(n/2);
    }

    if(n%3==0){
         op3=minsteps(n/3);
    }

    return arr[n]=1+min(op1, min(op2, op3));

}

int minstepsbu(int n ){

    int *arr=new int[n+1];

    arr[1]=0;

    for(int i=2;i<=n;i++){
        int op1= arr[i-1];
        int op2=INT_MAX;
        int op3=INT_MAX;
        if(i%2==0){
            op2=arr[i/2];
        }

        if(i%3==0){
            op3=arr[i/3];
        }

        arr[i]=1+min(op1, min(op2, op3));
    }

    return arr[n];

}


int main(){

    int n;
    cin>>n;

    cout<<minsteps(n)<<endl;

    int *arr=new int[n+1];

    for(int i=0;i<=n;i++){
        arr[i]=-1;
    }

    cout<<minstepstd(n, arr)<<endl;

    // for(int i=0;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    cout<<minstepsbu(n)<<endl;

}