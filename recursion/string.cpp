#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string f(string s){
    if(s=="\0"){
        return s;
    }
    char ch=s[0];
    if(ch=='x'){
        return f(s.substr(1))+ch;
    }
    else{
        return ch+f(s.substr(1));
    }

}
int main(){
    string s;
    getline(cin,s);

    cout<<f(s)<<endl;



}