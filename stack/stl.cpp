#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.pop();

    cout<<st.top()<<endl;

    cout<<st.empty()<<endl;

    cout<<st.size()<<endl;

}