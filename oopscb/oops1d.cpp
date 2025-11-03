#include <iostream>
using namespace std;
class Aaaman{
public:
//be deafult these are private bt to access them outside the class we use public keyword
    string name;
    char color;
    float price;
    int seats;
    
    //constructor  -> agar likhte nahi hai toh default constructor bna deta hai compiler

    //deault constructor ko override krke humara constructor call hoga jab bhi object bnega
    Aaaman(){
        cout<<"hello"<<endl;

    }
    

    //parametrized constructor
    //memeber function-->return type nahi hai
    //jo call krega ussi ka toh name and color hoga islye hi z.name nahi likhte aur name=n likh sakte hai 
    // Aaaman(string n, char c, float p, int s){
    //     name=n;
    //     color=c;
    //     price=p;
    //     seats=s;

    // }

    Aaaman(string name, char color, float price, int seats){

        this->name=name; //jiske andar naam daalna hai usme this keyword use krte hai 
        this->color=color;
        this->price=price;
        this->seats=seats;

    }

    //issi ko getter likh dete hai 
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
    Aaaman q[10];
    q[0].input();
    q[0].print();

    q[1].input();
    q[1].print();

}