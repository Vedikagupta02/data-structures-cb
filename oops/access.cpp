#include <iostream>
using namespace std;

class Person{
private:
    string gender;
protected:
    int age;
public:
    string name;

    void setData(string gender, int age, string name){
        this->gender=gender;
        this->age=age;
        this->name=name;
    }

    void display(){
        cout<<gender<<endl;
        cout<<age<<endl;
        cout<<name<<endl;
    }

};

class Student : public Person{
public:
    void studentDisplay(){
        cout<<name<<endl;
        cout<<age<<endl;
        // cout<<gender<<endl;
    }

};

int main(){

    Person p1;
    p1.setData("female", 18, "kia");
    p1.display();
    Student s1;
    s1.setData("female", 20, "jia");
    s1.studentDisplay();

}