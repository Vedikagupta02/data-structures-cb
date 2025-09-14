#include <iostream>
using namespace std;
class Animal{
public:
    void eats(){
        cout<<"it eats"<<endl;
    }

};

class Dog : public Animal{
public:
    void barks(){
        cout<<"it barks"<<endl;
    }

};

int main(){
    Dog d1;
    d1.eats();
    d1.barks();

}