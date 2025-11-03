#include <iostream>
using namespace std;
int func(int a, int b){
    if(b==0){
        return 0;
    }

    return a+func(a,b-1);
}
int main(){
    int a,b;
    cin>>a>>b;

    cout<<func(a,b)<<endl;
}