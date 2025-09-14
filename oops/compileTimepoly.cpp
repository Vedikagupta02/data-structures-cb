#include <iostream>
using namespace std;
//overloading
class Calculator{
public:
    void add(int a , int b){
        cout<<a+b<<endl;
    }

    void add(double a, double b){
        cout<<a+b<<endl;
    }

};
int main(){
    Calculator c1;
    c1.add(2,3);
    c1.add(2.2, 3.3);

}