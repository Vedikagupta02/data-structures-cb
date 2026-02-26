#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //bubble sort
    for(int j=0;j<=n-2;j++){
        for(int i=0;i<=n-j-2;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
        
    }

    //time complexity --> (n-1)*(n-2)*(n-3)...1 -->(n-1)(n)/2 --> n^2 --> worst case time complexity O(n^2)
    //bce sum of n natural nos--> (n)(n+1)/2

    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }

}