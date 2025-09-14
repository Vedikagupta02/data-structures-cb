#include <iostream>
using namespace std;
int main(){
    int total;
    cin>>total;
    
    //first star
    cout<<1<<endl;

    for(int rowno=2;rowno<=total;rowno++){

        //star
        cout<<1;
        
        //space
        for(int i=1;i<=rowno-2;i++){
            int d= rowno*i -1;
            int f=d/i;
            cout<<f;
        }
        
        //star
        cout<<1;

        cout<<endl;
        


    }

}