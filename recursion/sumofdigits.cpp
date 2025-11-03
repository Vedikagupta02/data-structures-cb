#include <iostream>
using namespace std;
int func(int n, int sum){
    if(n==0){
        return sum;
    }

    int dig=n%10;
    return func(n/10, sum+dig);
}
int main(){
    int n;
    cin>>n;

    int sum=0;

    cout<<func(n, sum)<<endl;

}