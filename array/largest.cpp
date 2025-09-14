#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;

    // int no;
    // cin>>no;

    // int largest=no;

    // for(int i=1;i<=n-1;i++){
    //     cin>>arr[i];
    // }

    // for(int i=1;i<=n-1;i++){
    //     if(arr[i]>largest){
    //         largest=arr[i];
    //     }
    // }
    // cout<<largest<<endl;

    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi, arr[i]);
    }
    cout<<maxi<<endl;
}