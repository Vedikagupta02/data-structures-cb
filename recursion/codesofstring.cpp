#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void codesofstr(string ip, string op, int i){

    if(i==ip.length()){
        cout<<op<<" ";
        return;
    }
    if(i<ip.length()){
        codesofstr(ip, op+char((ip[i]-'1'+'a')), i+1);
    }
    if(i+1<ip.length()){
        int x=((ip[i]-'0')*10+ip[i+1]-'0');
        if(x<=26){
            char ch=x+96;
            codesofstr(ip, op+ch, i+2);

        }


    }



}
int main(){

    string ip;
    getline(cin, ip);

    string op="";

    codesofstr(ip, op, 0);


}