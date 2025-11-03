#include <iostream>
using namespace std;
void f(int i){
    if(i==6){
        return;
    }

    cout<<i<<endl;
    // f(i++); //infinite
    //concept of post increment operator--> i value stays same in recursion and doesnt get to the base case 
    
    // f(++i);
    f(i+1);
}
int main(){
    int i=1;

    f(i);


}