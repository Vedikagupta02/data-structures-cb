#include <iostream>
using namespace std;
int main(){
    int arr[10]; //first assign garbage values to all 
    //input
    for(int i=0;i<=9;i++){
        cin>>arr[i];
    }
    //output
    for(int i=0;i<=9;i++){
        cout<<arr[i];
    }

    int arr[5]={1,2,3, 4 ,5}; 

    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    //output
    for(int i=0;i<=4;i++){
        cout<<arr[i];
    }

    int arr[3]={1};//->gives 0 values output will 1,0,0

}