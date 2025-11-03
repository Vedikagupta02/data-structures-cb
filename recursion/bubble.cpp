#include <iostream>
using namespace std;
void f(int arr[], int n, int j, int i){
    if(j==n){
        return;
    }

    if(n==n-j){
        f(arr, n, j+1, 0);
    }
    else{
    if(arr[i]>arr[i+1]){
        swap(arr[i], arr[i+1]);
    }
    
    f(arr, n, j, i+1);
}
    

   
}
int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=1;
    int i=0;

    f(arr, n, j, i);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}