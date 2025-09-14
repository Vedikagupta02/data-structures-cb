#include <iostream>
using namespace std;
int main(){
    int s, e, step;
    cin>>s>>e>>step;
    for(int f=s;f<=e;f=f+step){
        int c=(5.0/9)*(f-32);

        cout<<f<<'\t'<<c<<endl;
    }
}