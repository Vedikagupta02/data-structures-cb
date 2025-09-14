#include <iostream>
using namespace std;
//arrays are always passed by reference therefore the change is the same and is seen in the main also
void update(int arr[], int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]+10;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

//prints updated value
    update(arr,n);
//prints updated value bec arrays are always passed by refernce 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}