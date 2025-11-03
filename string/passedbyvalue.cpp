#include <iostream>
using namespace std;
void f(string &x){
    x=x+"abs";
    cout<<x<<endl;
}
int main(){
    string s="hello";
    f(s);
    //strings are passed by value
    cout<<s<<endl;

}