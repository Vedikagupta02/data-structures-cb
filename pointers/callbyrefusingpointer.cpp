#include <iostream>
using namespace std;
//datatype->int*, x ka address
void abc(int *y){ 
    // it had been int&y--> then new bucket will not be created 
    //same cheez ko point nahi krra????
    
    *y=*y+10;
    cout<<*y<<endl;


}
int main(){
    //nayi bucket bangei upar
    int x=30;
    abc(&x);
    cout<<x<<endl;


}