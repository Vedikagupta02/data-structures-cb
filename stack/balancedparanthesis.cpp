#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool balance(char arr[]){

    stack<char>st;

    for(int i=0; arr[i]!='\0';i++){
    char ch=arr[i];

        switch(ch){
            case '[': st.push(ch);
            break;
            case '{': st.push(ch);
            break;
            case '(' : st.push(ch);
            break;
            case ')' :  if(!st.empty() && st.top()=='(') {
                st.pop();
            }
            else{
                return false;
            }
            break;
            case ']' :  if(!st.empty() && st.top()=='[') {
                st.pop();
            }
            else{
                return false;
            }
            break;
            case '}' :  if(!st.empty() && st.top()=='{') {
                st.pop();
            }
            else{
                return false;
            }
            break;

        

        }

    
    }

    if(!st.empty()){
        return false;
    }
    return true;



}
int main(){
    char arr[]="[x+([{(a+b)+c}*d]+e)]";

    cout<<balance(arr);

}