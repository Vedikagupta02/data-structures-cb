#include <iostream>
using namespace std;
int stringtoint(string s , int n){
    if(n==0){
        return 0;
    }

    //recursive
    return stringtoint(s, n-1)*10+(s[n-1]-'0');
}
int main(){
    string s;
    getline(cin, s);

    int n=s.length();

    cout<<stringtoint(s, n)<<endl;

    //if we write return 0 then scope is destroyed

}