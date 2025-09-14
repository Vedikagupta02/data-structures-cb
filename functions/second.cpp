#include <iostream>
using namespace std;

// if we want to have a func below main then we need to declare the func first before the func call and then only the code will execute
//and the code can be written below the main then

//the same func has to be written while declaration also
int sum4(int a, int b, int c);

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<sum4(a, b,c)<<endl; 

}
//the rest of the code can be written here 
int sum4(int a, int b, int c){
    return a+b+c;
}