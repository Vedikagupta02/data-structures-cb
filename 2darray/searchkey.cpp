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

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==key){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }

    cout<<"No"<<endl;
    return 0;
}