#include <iostream>
using namespace std;
int main(){
    
    int no,upto;
    cin>>no>>upto;
    float step=1;
    float i=0;
    for(int times=1;times<=upto+1;times++){
        while(i*i<=no){
        i=i+step;
        }

        i=i-step;
        step=step/10;

    }

    cout<<i<<endl;
    return 0;

}