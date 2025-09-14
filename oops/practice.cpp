#include <iostream>
using namespace std;

class Student{
public:
    string name;

    void start(){
        cout<<"Hi I am a student"<<endl;

    }

};
int main(){
    Student s1;
    s1.name="kia";
    s1.start();
    cout<<s1.name<<endl;

}