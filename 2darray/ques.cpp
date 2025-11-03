#include <iostream>
using namespace std;
int main(){
    int arr[100][100];

    int r,c;
    cin>>r;
    cin>>c;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    for(int j=0;j<c;j++){
        if(j%2==0){
            for(int i=0;i<r;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=r-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}