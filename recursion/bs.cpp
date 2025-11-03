#include <iostream>
using namespace std;
bool bs(int arr[], int low, int high, int key){
    if(low>high){
        return false;
    }

    int mid=low+(high-low)/2;

    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]<key){
        return bs(arr, mid+1, high, key);

    }
    else{
        return bs(arr, low, mid-1, key);
    }
}
int main(){
    int n;
    cin>>n;

    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;

    int key;
    cin>>key;

    if(bs(arr, low, high, key)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }


}