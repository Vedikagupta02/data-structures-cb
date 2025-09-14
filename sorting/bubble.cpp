#include <iostream>
using namespace std;
int main(){
    int arr[5]={3,4,7,1,2};
    int n;
    cin>>n;
    //cnt no of time kitnaa chlra hai --j
    for(int j=0;j<=n-2;j++){
        bool ifswap=false;
        for(int i=0;i<=n-j-2;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
                ifswap=true;
            }
        }
        //if the array returns here means its best case (best case time complexity)
        if(ifswap==false){
            break;
        }
    }

    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}
//we are optimizing using bool ifswap to lessen the iterations and time complexity- that if we have already sorted array
//then we dont have to do any work and we can return the array

//worst case time complexity : n(n-1)/2 
//sum of n natural no is : n(n+1)/2
//best case time complexity : (n-1)