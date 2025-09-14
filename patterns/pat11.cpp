#include <iostream>
using namespace std;
int main(){
    int total;
    cin>>total;

    for(int rowno=1;rowno<=total;rowno++){

        for(int i=1;i<=total-rowno;i++){
            cout<<" "<<" ";
        }
        int startno=rowno;
        for(int j=1;j<=rowno;j++){
            cout<<startno<<" ";
            startno++;
        }
        // int start=2*rowno-2;
        for(int k=1;k<=rowno-1;k++){
            cout<<startno-2<<" ";
            startno--;
        }

        cout<<endl;
    }
}