#include <iostream>
using namespace std;
int nstaircase(int n){
    if(n<0){
        return 0;
    }
    if(n==1 || n==0){
        return 1;
    }

    // int sum=0;
    // for(int i=1;i<=k;i++){
    //     sum+=nstaircase(n-i);
    // }
    // return sum;

    return nstaircase(n-1) + nstaircase(n-2) + nstaircase(n-3);
}
int main(){
    int n;
    cin>>n;

    cout<<nstaircase(n);
}