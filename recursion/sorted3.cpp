#include <iostream>
using namespace std;  

bool issorted(int arr[], int n){
    if(n==1){
        return true;
    }

    if(arr[n-2]<=arr[n-1] && issorted(arr, n-1)){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(issorted(arr, n)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }



}