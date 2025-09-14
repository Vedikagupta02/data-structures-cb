#include <iostream>
using namespace std;
int main(){
    int total;
    cin>>total;
    for(int rowno=1;rowno<=(total-1)/2;rowno++){
        cout<<"*";
        cout<<" ";

        for(int i=1;i<=total-(2*rowno);i++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int rowno=(total+1)/2;rowno=(total+1)/2;rowno++){
        for(int j=1;j<=total;j++){
            cout<<"*";
        }
        cout<<endl;

    }

    for(int rowno=1;rowno<=(total-1)/2;rowno++){
        for(int k=1;k<=(((total*2)-rowno)-rowno);k++){
            cout<<" ";
        }
        for(int l=1;l<=2*rowno-1;l++){
            cout<<"*";
        }

        cout<<" ";
        cout<<"*";

        cout<<endl;
    }

}