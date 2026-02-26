#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int nstaircase(int n, int k){

    if(n<0){
        return 0;
    }

    if(n==0){
        return 1;
    }

    
    int sum=0;
    for(int i=1;i<=k;i++){
        sum+=nstaircase(n-i, k);
    }

    return sum;
}

int nstaircasetd(int n, int k, vector<int>&arr){

    if(n<0){
        return 0;
    }

    if(n==0){
        return arr[n]=1;
    }

    if(arr[n]!=-1){
        return arr[n];
    }

    
    int sum=0;
    for(int i=1;i<=k;i++){
        sum+=nstaircasetd(n-i, k, arr);
    }

    return arr[n]=sum;
}

int nstaircasebu(int n, int k){

    vector<int>arr(n+1);

    arr[0]=1;

    
    for(int i=1;i<=n;i++){

        for(int j=1;j<=k;j++){

            if(i-j>=0){
                

                arr[i]+=arr[i-j];
            }
        }
        
    }

    return arr[n];
}

int main(){

    int n;
    cin>>n;

    int k;
    cin>>k;

    cout<<nstaircase(n, k);

    vector<int>arr(n+1, -1);

    cout<<nstaircasetd(n, k, arr);

    cout<<nstaircasebu(n,k);

}