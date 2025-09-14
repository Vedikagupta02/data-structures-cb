#include <iostream>
using namespace std;
int main(){
    float c, f;
    cin>>f;
    // (5/9) gives 0 bec int/int gives an int
    //but a float/int and float/float anf int/float gives float so gives correct ans 
    //  (5.0/9.0) gives float 
    c= (float(5)/9) *(f-32);

    cout<<c<<endl;
}