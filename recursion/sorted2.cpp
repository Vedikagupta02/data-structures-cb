#include <iostream>
using namespace std;

bool issorted(int arr[], int n, int i){
    if(i==(n-1)){
        return true;
    }

    if(arr[i]<=arr[i+1] && issorted(arr, n, i+1)){
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

    int i=0;

    if(issorted(arr, n, i)){
        cout<<"yes"<<endl;

    }
    else{
        cout<<" no "<<endl;
    }

}