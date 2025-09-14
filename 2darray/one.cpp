#include <iostream>
using namespace std;
int main(){
    //if we declare int arr[2][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    //then the values we do not declare wil be zero
    //but if we first declare and then put in values received from the user, then the vlaues will be garbage values
    //so always initialise the array with 0 if we are taking input from user
    // int arr[100][100];

    // int r;
    // cin>>r;
    // int c;
    // cin>>c;

    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cin>>arr[i][j]; 
    //     }
    // }

    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cout<<arr[i][j]<<" "; 
    //     }
    //     cout<<endl;
    // }

    // int arr[3][4];
    // cout<<arr<<endl;
    // cout<<&arr[0][0]<<endl;
    // cout<<&arr[1][0]<<endl;
    // cout<<&arr[2][0]<<endl;

    char arr[4][5]={{'a','b','c','d','\0'},{'e','f','g','h','\0'},{'i','j','k','l','\0'}};
    //only in 2d array this gives address but not in 1d char array
    cout<<arr<<endl;
    //gives value at the bucket till we get null unlike int arr where we get address
    //bec they act like normal printing of rows and cols 
    cout<<&arr[0][0]<<endl;
    cout<<&arr[1][0]<<endl;
    cout<<&arr[2][0]<<endl;

   
}