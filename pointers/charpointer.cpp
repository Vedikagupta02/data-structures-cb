#include <iostream>
using namespace std;
int main(){
    char ch='s';
    //does not give address--> gives value of the bucket and garbage values till we get null
    cout<<ch<<endl;
    cout<<&ch<<endl;

    //fooling of compiler-->as a int bucket so that char location printed 

    // cout<<(int*)&ch<<endl;
    cout<<(void*)&ch<<endl;
}