#include <iostream>
using namespace std;
int count=0;

void subse(char ip[1000], char op[1000], int i, int j){

    if(ip[i]=='\0'){
        op[j]='\0';
        cout<<op<<endl;
        count++;
        return; 

    }

    //without a
    subse(ip, op, i+1,j);
    //adding 'a' aage output array pe
    op[j]=ip[i];
    //with a
    subse(ip, op, i+1, j+1);

}
int main(){
    char ip[1000];
    cin.getline(ip,1000);
    char op[1000];
    subse(ip, op, 0,0);

}