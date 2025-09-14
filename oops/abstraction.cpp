#include <iostream>
using namespace std;

class Car{
public:
    virtual void start()=0;

};

class Tesla : public Car{
public:
    void start(){
        cout<<"Tesla starts with a button"<<endl;
    }
};

class Maruti : public Car{
public:
    void start(){
        cout<<"Maruti starts with a key"<<endl;
    }
};


int main(){
    Car * c1;
    c1=new Tesla();
    c1->start();

    c1=new Maruti;
    c1->start();



}