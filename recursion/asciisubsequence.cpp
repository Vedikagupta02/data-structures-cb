#include <iostream>
using namespace std;

void asciisubs(string ip, string op, int i){

    if(ip[i]=='\0'){
        cout<<op<<" ";
        return;
    }

    asciisubs(ip, op, i+1);

    asciisubs(ip, op+ip[i], i+1);

    asciisubs(ip, op+to_string(int(ip[i])), i+1); // we cannot concatenate str + int 

}
int main(){

    string ip;
    getline(cin, ip);

    string op="";


    asciisubs(ip, op, 0);
}