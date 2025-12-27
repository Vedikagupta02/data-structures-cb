#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool comp(string a, string b){
    int l1=a.length();
    int l2=b.length();

    if(l1<l2 && b.substr(0, l1)==a){
        
            return false;
    }
    else if(l2<l1 && a.substr(0, l2)==b ){
        return true;
    }
    else{
        return a<b;
    }

}
int main(){

    int n;
    cin>>n;
    cin.ignore();
    string s[100];

    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    sort(s, s+n, comp);

    for(int i=0;i<n;i++){
        cout<<s[i];
    }


}

#include<iostream>
#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;

	cin.ignore();
	vector<string>st;

	while(n--){
		string s;
		getline(cin, s);

		st.push_back(s);

		
	}

	int len=st.size();

	sort(st.begin(), st.end());

	
    for(int i=0;i<len-1;i++){
        if(st[i+1].find(st[i])!=-1){
            swap(st[i], st[i+1]);
        }
    }
	for(int i=0;i<len;i++){
		cout<<st[i]<<endl;
	}

}