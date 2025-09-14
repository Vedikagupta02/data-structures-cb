#include <iostream>
using namespace std;
int main(){
    int total;
    cin>>total;

    for(int rowno=1;rowno<=1;rowno++){
        for(int i=1;i<=total-rowno;i++){
            cout<<" ";
        }
        for(int j=1;j<=total;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int rowno=2;rowno<=total-1;rowno++){
        for(int k=1;k<=total-rowno;k++){
            cout<<" ";

        }

        cout<<"*";

        for(int l=1;l<=total-2;l++){
            cout<<" ";
        }

        cout<<"*";

        cout<<endl;
    }

    for(int rowno=total;rowno<=total;rowno++){
        for(int m=1;m<=rowno;m++){
            cout<<"*";
        }
        cout<<endl;
    }

    
}