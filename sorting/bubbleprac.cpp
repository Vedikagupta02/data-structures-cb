#include <iostream>
using namespace std;
int main(){
    int arr[5]={3,4,7,1,2};
    int n;
    cin>>n;
    
    for(int j=0;j<=n-2;j++){
        for(int i=0;i<=n-j-2;i++){

            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
