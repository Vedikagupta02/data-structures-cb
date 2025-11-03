#include <iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};

    // for(int x: arr){
    //     cout<<x<<endl;
    // }

    //we use auto keyword to avoid writing data type again and again (when we dont even know the datatype)
    for(auto x: arr){
        cout<<x<<endl;
    }
}