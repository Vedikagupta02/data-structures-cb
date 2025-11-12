#include <iostream>
using namespace std;

//blueprint to create objects
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

//WHENEVER AN OBJECT IS CREATED THE CONSTRUCTOR IS AUTOMATICALLY CALLED

int main(){
    //aaman is a datatype here like int, float, char
    //x is the object of class Aaaman just like a variable of int, float, char

    Aaaman x; // obj is created 
    x.name="BMW";
    x.color='W';
    x.price=90.5;
    x.seats=5;

    cout<<x.name<<endl;
    cout<<x.color<<endl;
    cout<<x.price<<endl;
    cout<<x.seats<<endl;

    Aaaman y;
    y.name="Audi";
    y.color='B';        
    y.price=80.5;
    y.seats=5;

    cout<<y.name<<endl; 
    cout<<y.color<<endl;
    cout<<y.price<<endl;
    cout<<y.seats<<endl;

    Aaaman z("Ferrari",'R',150.5,2); //parametrized constructor called
    z.print();

    Aaaman q;
    q.input();
    q.print();

}