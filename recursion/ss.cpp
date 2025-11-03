#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long solve(string s, int i, int j, int n){
    if(i==n){
        return 0;
    }

    for(int l=j;l>=0;l--){
        return 1+solve(s, i+1, j-1, n);
    }

    return solve(s, i+1, n-1, n);
}
int main(){
    string s;
    getline(cin,s);

    int n=s.size();

    long ans=solve(s, 0, n-1, n);
    cout<<ans<<endl;

}