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

    int sr=0;
    int er=r-1;
    int sc=0;
    int ec=c-1;

    //this code works for every sq matrix but doesnt work for every non sq matrix
    while(sc<=ec && sr<=ec){
        for(int i=sc;i<=ec;i++){
            cout<<arr[sr][i]<<" ";
        }
        sr++;

        for(int j=sr;j<=er;j++){
            cout<<arr[j][ec]<<" ";
        }
        ec--;

        for(int s=ec;s>=sc;s--){
            cout<<arr[er][s]<<" ";
        }
        er--;

        for(int k=er;k>=sr;k--){
            cout<<arr[k][sc]<<" ";
        }
        sc++;
    }
}