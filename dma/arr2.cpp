#include <iostream>
using namespace std;
int main(){

    int **arr=new int *[3]; //2d array

    for(int i=0;i<3;i++){
        arr[i]=new int [4];
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<3;i++){
        delete [] arr[i];
    }

    delete [] arr;
    arr=nullptr;

}