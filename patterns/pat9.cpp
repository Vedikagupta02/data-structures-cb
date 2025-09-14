#include <iostream>
using namespace std;
int main(){
    int total;
    cin>>total;
    //using for loop
    for(int rowno=1;rowno<=total;rowno++){
        
        for(int i=1;i<=total-rowno;i++){
            cout<<" "<<'\t';
        }
        int startno=1;
        for(int i=1;i<=2*rowno-1;i++){
            // cout<<i;
            cout<<startno<<'\t';
            startno++;
        }
        cout<<endl;
    }


}