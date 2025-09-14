#include <iostream>
using namespace std;
int main(){
    int total;
    cin>>total;
    //using for loop
    for(int rowno=1;rowno<=total;rowno++){
        
        for(int i=1;i<=total-rowno;i++){
            cout<<" ";
        }
        for(int i=1;i<=2*rowno-1;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    //using while loop
    int rowno=1;
    while(rowno<=total){
        int i=1;
        while(i<=total-rowno){
            cout<<" ";
            i++;
        }
        int i=1;
        while(i<=2*rowno-1){
            cout<<"*";
            i++;
        }
        cout<<endl;
        rowno++;
    }
}