#include <iostream>
using namespace std;
//mapping of numbers to characters
string arr[]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void phonekeypad(string &input, int i, string &output){

    if(input[i]=='\0'){
        cout<<output<<endl;
        return;
    }

    char ch=input[i]; //'2
    int ind=ch-'0'; //2

    for(int l=0; arr[ind][l]!='\0'; l++){
        // output[j]=arr[ind][l];
        output=output+arr[ind][l];
        phonekeypad(input, i+1, output);
        output.pop_back();  //backtracking
    }
}

int main(){
    // char input[100];
    // char output[100];
    // cin.getline(input, 100); //"23"
    string input;
    getline(cin, input);
    string output="";
    phonekeypad(input, 0, output);
}