#include <iostream>
using namespace std;
void chan(int n){ // new bucket is being created with new value--> change is being done on the new value
    n=n+10;
    cout<<n<<endl;
}

int chan2(int n){ 
    n=n+10;
    return n;
}

int main(){
    int n;
    cin>>n;
    cout<<n<<endl; //prints original n
    chan(n); //change not reflected in the main bec a new variable craeted in call by value and the change wont get reflected in the main
    cout<<n<<endl;
    cout<<chan2(n)<<endl;
    cout<<n<<endl; //prints original n


    //the func calls print the value 15 but the value n doesnt get changed and prints 5 only 
    //this is called call by value


}