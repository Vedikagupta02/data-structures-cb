#include <iostream>
using namespace std;
int main(){
    int total;
    cin>>total;
    //using for loop
    int startno=1;
    for(int rowno=1;rowno<=total;rowno++){
        
        for(int i=1;i<=total-rowno;i++){
            cout<<" "<<'\t';
        }
        
        for(int i=1;i<=2*rowno-1;i++){
            // cout<<i;
            cout<<startno<<'\t';
            startno++;
        }
        cout<<endl;
    }


}