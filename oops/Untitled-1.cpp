#include <iostream>
using namespace std;

class Book{
public:
    string title;
    string author;
    double price;

    Book(string title, string author, double price){
        this->title=title;
        this->author=author;
        this->price=price;

    }

    void showDetails(){
        cout<<title<<author<<price<<endl;

    }

};

int main(){

    Book b1("hi", "huh", 100);
    b1.showDetails();
    Book b2("hi", "huh", 100);
    b2.showDetails();


}