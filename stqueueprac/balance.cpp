#include<bits/stdc++.h>
#include <iostream>
using namespace std;
bool checkbalance(string &s){
	
	stack<int>st;

	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
			st.push(s[i]);
		}
		else{
			if(!st.empty()){
				if((s[i]==')' && st.top()!='(')|| (s[i]=='}' && st.top()!='{') 
				||(s[i]==']' && st.top()!='[')){
					return false;
					
				}
				else{
					st.pop();
				}

			}
			else{
				return false;
			}


		}

	}

	return st.empty();
}
int main() {
	string s;
	getline(cin,s);

	if(checkbalance(s)==0){
		cout<<"false";
	}
	else{
		cout<<"true";
	}
	return 0;
}