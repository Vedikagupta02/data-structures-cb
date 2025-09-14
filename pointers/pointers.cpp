#include <iostream>
using namespace std;
int main(){

    int a=10;
    float b=50.43;
    double c=45.9870;

    cout<<a<<endl;
    cout<<&a<<endl;
    //op-->0xcfc57ffc6c : gives address of the first byte and starts with 0x

    //single pointer
    int *x=&a;
    cout<<x<<endl;
    
    //double pointer 
    int * *d=&x;
    cout<<d<<endl;

    //int *--> x ka datatype, *  as suntax, d-->variable name, &x-->address of x 
    //int *--> the datatype will the same dataype as x which has a daratype int *

    int ** *r=&d;
    cout<<r<<endl;

    //*r--> derefernce

    //jiska address hai uska value do 
    cout<<*r<<endl;
    cout<<*d<<endl;
    cout<<*x<<endl;

    cout<<(*(*(*r)))<<endl;
}