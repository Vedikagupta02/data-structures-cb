#include <iostream>
using namespace std;
int main(){
    int total;
    cin>>total;

    //first part--1to4
    for(int rowno=1;rowno<=(total+1)/2;rowno++){
        for(int i=1;i<=((total+1)/2)-rowno;i++){
            cout<<" ";
        }

        for(int j=1;j<=2*rowno-1;j++){
            cout<<"*";
        }

        cout<<endl;


    }

    //second part--5to7
    for(int rowno=1;rowno<=(total-1)/2;rowno++){
        for(int k=1;k<=rowno;k++){
            cout<<" ";
        }
        for(int l=1;l<=total-2*rowno;l++){
            cout<<"*";
        }
        cout<<endl;

    }
}