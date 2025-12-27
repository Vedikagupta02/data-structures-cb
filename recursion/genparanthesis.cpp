#include <iostream>
using namespace std;
void genparanthesis(int n, int open, int close, string x){
    if(close==n){
        cout<<x<<endl;
        return;
    }

    if(open<n){
    genparanthesis(n, open+1, close, x+'(');
    }
    if(close<open){
    genparanthesis(n, open, close+1, x+')');
    }

}
int main(){
    int n;
    cin>>n;
    string x="";

    genparanthesis(n, 0, 0, x);
}