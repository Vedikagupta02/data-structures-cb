#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertatbottom(stack<int>&st, int el){

    if(st.empty()){
        st.push(el);
        return;

    }
    int a=st.top();
    st.pop();

    insertatbottom(st, el);
    st.push(a); //this for pushing the same element again 

}
void reverse(stack<int>&st){
    if(st.empty()){
        return;
    }

    int el=st.top();
    st.pop();

    reverse(st);
    insertatbottom(st, el);

}
int main(){

    stack<int>st;
    st.push(3);
    st.push(5);
    st.push(2);
    st.push(6);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();

    }

    st.push(3);
    st.push(5);
    st.push(2);
    st.push(6);

    reverse(st);
    cout<<endl;

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();

    }





}