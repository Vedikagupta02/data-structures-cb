#include <iostream>
using namespace std;
//name same hai but scope diff hai 

void chan(int &n){ //int &n=n --> nickname syntax
     // the same value of n comes here bec n is the same as the one thats coming from main when the func is called
    //the same original n is getting changed
    //&n is the nickname of n
    //new bucket is not getting created
    n=n+10;
    cout<<n<<endl;
}



int main(){
    //using ref variable 
    int n;
    cin>>n;
    cout<<n<<endl; //prints 5 
    chan(n); //prints 15
    cout<<n<<endl; //prints 15 only 

    


}