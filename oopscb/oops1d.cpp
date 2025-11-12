#include <iostream>
using namespace std;
class Aaaman{
public:

    string name;
    char color;
    float price;
    int seats;
    
    
    Aaaman(){
        cout<<"hello"<<endl;

    }
    
    Aaaman(string name, char color, float price, int seats){

        this->name=name; 
        this->color=color;
        this->price=price;
        this->seats=seats;

    }

    void print(){
        cout<<name<<endl;
        cout<<color<<endl;
        cout<<price<<endl;
        cout<<seats<<endl;
    }
    
    //issi ko setter likh dete hai 
    void input(){
    
        cin>>name;
        cin>>color;
        cin>>price;
        cin>>seats;
    }

};

int main(){
    //aaman type ka array ban gya 
    Aaaman q[10];
    //10 objects are created -->constructor called 10 times
    q[0].input();
    q[0].print();

    q[1].input();
    q[1].print();

}