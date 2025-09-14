#include <iostream>
using namespace std;
int main(){
    int arr[5]={5,4,3,2,1};
    int n;
    cin>>n;

    for(int pos=0;pos<=n-2;pos++){
        int minind=pos;
        for(int j=pos+1;j<=n-1;j++){
            if(arr[minind]>arr[j]){
                minind=j;
            }
        }
        swap(arr[pos], arr[minind]);

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}