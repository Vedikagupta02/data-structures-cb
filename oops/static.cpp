#include <iostream>
using namespace std;

class Helper{
public:
    void display(){
        cout<<"Hello from the outside"<<endl;
    }

    static void add(int a, int b){
        cout<<a+b<<endl;
    }


};

int main(){

    //non static- needs an obj
    Helper h1;
    h1.display();

    //static
    Helper :: add(3,4);

}