#include <iostream>
using namespace std;

string converttopi(string s){

    if(s.length()==0){
        return "";
    }

    if(s.substr(0,2)=="pi"){
        return "3.14"+converttopi(s.substr(2));
    }
    else{
        return s[0]+converttopi(s.substr(1));
    }
}
int main(){
    string s;
    getline(cin, s);

    cout<<converttopi(s);


}