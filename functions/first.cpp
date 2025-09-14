#include <iostream>
using namespace std;
//function 
// returntype name(){
//     //statements
// }

void statements(){
    //statements
    cout<<"hello"<<endl;
    cout<<"hi"<<endl;
    cout<<"bye"<<endl;
}
void sum(){
    int x,y;
    cin>>x>>y;

    cout<<x+y<<endl;
}

int sum2(){
    int x,y;
    cin>>x>>y;

    return x+y;

}

void sum3(int a, int b){
    cout<<a+b<<endl;
}

int sum4(int a, int b){
    return a+b;
}

int main(){
    int a=5;
    int b=10;

    cout<<"hello"<<endl;
    cout<<"hi"<<endl;
    cout<<"bye"<<endl;

    cout<<a<<endl;
    statements(); //func call
    //code ka flow interrupt hora hai 
    cout<<b<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    statements();

//functions- no of lines of code kam , no repetition, readable code 
    sum();
    cout<<sum2()<<endl;
    sum3(a, b); // and b are arguments
    cout<<sum4(a, b)<<endl; 


}