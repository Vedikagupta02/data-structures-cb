#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fib(int n){

    if(n==1){
        return 0;
    }

    if(n==2){
        return 1;
    }

    return fib(n-1)+fib(n-2);
}

int fibdp(int n, int *arr){

    if(n==1){
        //return krne se pehle store krna hai 
        return arr[n]=0;
    }

    if(n==2){
        //return krne se pehle store kro value ko 
        return arr[n]=1;
    }
    
    //calculate krne se pehle check
    if(arr[n]!=-1){
        return arr[n];
    }
    //return krne se pehle store
    return arr[n]=fib(n-1)+fib(n-2);
}

//for bottom up we use simple loop
int fibbottomup(int n){
     
    int *arr=new int[n+1];//size of array is n+1

    //jo top down ka base case hota hai vo bottom up ka initialization hota hai

    arr[1]=0;
    arr[2]=1;

    for(int i=3;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }

    return arr[n];

}

int main(){
    int n;
    cin>>n;
    //dynamically we create an array bec its good practice
    int *arr=new int[n+1];

    for(int i=0;i<=n;i++){
        arr[i]=-1;

    }

    cout<<fibdp(n, arr)<<endl;


    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";

    }

    cout<<fibbottomup(n)<<endl;
}