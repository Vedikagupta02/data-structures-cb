#include <iostream>
#include <string>

using namespace std;

class ABC{
public:
    ABC(){
        cout<<"const"<<endl;
    }

    ~ABC(){
        cout<<"destruct"<<endl;
    }


};

int main(){
    if (true){
        static ABC a1;
    }

    cout<<"end"<<endl;

    



}