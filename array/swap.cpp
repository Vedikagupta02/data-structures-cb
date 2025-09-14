#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    // int temp=a;
    // a=b;
    // b=temp;

    // b=a+b;
    // a=b-a;
    // b=b-a;

    b=(a+b)-(a=b);
    // a=(a+b)-(b=a);

    cout<<a<<" "<<b<<endl;
}