#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b){

    return a>b;

    
    

}
int main(){

    int n;
    cin>>n;
    cin.ignore();
    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr, arr+n, comp);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}