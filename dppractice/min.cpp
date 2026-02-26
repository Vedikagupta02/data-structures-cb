#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minsteps(int n){

    if(n==1){
        return 0;
    }

    int op1=minsteps(n-1);

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

int topdownminsteps(int n, vector<int>&arr){

    if(n==1){
        return arr[n]=0;
    }

    if(arr[n]!=-1){
        return arr[n];
    }

    int op1=topdownminsteps(n-1, arr);

    int op2=INT_MAX;
    int op3=INT_MAX;

    if(n%2==0){
        op2=topdownminsteps(n/2, arr);

    }

    if(n%3==0){
        op3=topdownminsteps(n/3, arr);
        
    }


    return arr[n]=1+min(op1, min(op2, op3));
}

int minstepsbottomup(int n){

    vector<int>arr(n+1, -1);

    arr[1]=0;

   
    
    for(int i=2;i<=n;i++){
         int op2=INT_MAX;
        int op3=INT_MAX;
        int op1=arr[i-1];

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

    vector<int>arr(n+1, -1);
    cout<<topdownminsteps(n, arr)<<endl;
    cout<<minstepsbottomup(n)<<endl;

}