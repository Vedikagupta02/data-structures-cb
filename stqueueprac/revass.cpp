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
    st.push(a);
}

void reversestack(stack<int>&st){
    if(st.empty()){
        return;
    }

    int el=st.top();
    st.pop();
    reversestack(st);
    insertatbottom(st, el);

}
int main(){
    
    stack<int>st;
    
    int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		int val;
		cin>>val;

		st.push(val);
    
	}

	reversestack(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

}