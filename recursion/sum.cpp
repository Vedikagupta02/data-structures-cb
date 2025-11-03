#include <iostream>
using namespace std;
int summation(int arr[], int n, int sum){
    if(n==0){
        return sum;
    }

    return summation(arr, n-1, sum+arr[n-1]);
}
int summation2(int arr[], int n){
    if(n==1){
        return arr[0];
    }

    return arr[n-1]+summation2(arr, n-1);
}
int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;

    cout<<summation(arr, n, sum)<<endl;
    cout<<summation2(arr, n)<<endl;
}