#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1};

    int n=sizeof(arr)/sizeof(int); //size of array

    //cumulative of quick and merge sort (nlogn)
    sort(arr, arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }

}