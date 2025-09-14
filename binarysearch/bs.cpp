#include <iostream>
using namespace std;
int main(){
    int arr[10]={2,4,5,6,7,8,10,12,13,15};
    int n;
    cin>>n;
    int key;
    cin>>key;

    int low=0;
    int high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==key){
            cout<<mid<<endl;
            return 0;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        
        }
    }
    return 0;

    
}