#include <iostream>
using namespace std;
int main(){
    int a=20;

    cout<<&a<<endl;
    //gives address of the first byte of the next bucket : moves 4 places 
    cout<<&a+1<<endl;
    cout<<&a+2<<endl;
    cout<<&a+3<<endl;

    // declaring multiplr pointers
    int *x, *y, *z;
    //x y z is a pointer 


}