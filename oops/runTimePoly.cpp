#include <iostream>
using namespace std;
//overriding
class Animal{
public:
    virtual void sound(){ // if we dont use virtual keyword- it will execute at compile time and animal sound will be the output
        cout<<"Animal sound"<<endl;
    }

};

class Dog : public Animal{
public:
    void sound(){
        cout<<"barks"<<endl;
    }

};
int main(){

    Animal *a; //without virtual, the program decides that its an animal 
    Dog d;
    a=&d;//with virtual, obj decided at runtime and therefore points to dog
    a->sound();

}