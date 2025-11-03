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
    int key;
    cin>>key;

    //staircase method only works for sorted row and col 2d array

    int l=0;
    int k=c-1;
    while(l<r || k>=0){
        if(arr[l][k]==key){
            cout<<"key present"<<endl;
            return 0;
        }
        else if (arr[l][k]>key){
            k--;
        }
        else{
            l++;
        }   
    }

    cout<<"key not present"<<endl;
    return 0;
}