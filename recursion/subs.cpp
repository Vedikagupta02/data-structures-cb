#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void subs(string s, string out, int i, int j){
	if(i==s.length()){
		cout<<out<<endl;
		return;
	}

	subs(s, out, i+1,j);
	out+=s[i];
	subs(s, out, i+1,j+1);
}
int main() {
	int n;
	cin>>n;
	cin.ignore();

	while(n--){
		string s;
		getline(cin, s);
		string out="";
		//subs(s,out,i);
		subs(s, out, 0,0);
	}
	return 0;
}