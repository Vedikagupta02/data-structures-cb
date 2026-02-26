#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int lcs(string &s1, string &s2, int i, int j){

    if(i==s1.length() || j==s2.length()){
        return 0;
    }

    if(s1[i]==s2[j]){
        return 1+lcs(s1, s2, i+1, j+1);
    }
    else{

        int op1=lcs(s1, s2, i+1, j);
        int op2=lcs(s1, s2, i, j+1);

        return max(op1, op2);
    }
}

int lcstd(string &s1, string &s2, int i, int j, vector<vector<int>>&vec){

    if(i==s1.length() || j==s2.length()){
        return vec[i][j]=0;
    }

    if(vec[i][j]!=-1){
        return vec[i][j];
    }

    if(s1[i]==s2[j]){
        return vec[i][j]=1+lcstd(s1, s2, i+1, j+1, vec);
    }
    else{

        int op1=lcstd(s1, s2, i+1, j, vec);
        int op2=lcstd(s1, s2, i, j+1, vec);

        return vec[i][j]=max(op1, op2);
    }
}

int bu(string &s1, string &s2, int n, int m, int i, int j){
    vector<vector<int>>vec(n, vector<int>(m));

    for(int l=0;l<=n;l++){
        vec[l][m]=0;
    }

    for(int l=0;l<=m;l++){
        vec[n][l]=0;
    }

    for(int p=n-1;p>=0;p--){
        for(int q=m-1;q>=0;q--){
            if(s1[p]==s2[q]){
                vec[p][q]=1+vec[p+1][q+1];
            }
            else{
                vec[p][q]=max(vec[p+1][q], vec[p][q+1]);
            }
        }
    }
    return vec[0][0];
}
int main(){
    int n;
    cin>>n;

    int m;
    cin>>m;

    cin.ignore();
    
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    

    cout<<lcs(s1, s2, 0, 0)<<endl;
    

    vector<vector<int>>vec(n+1, vector<int>(m+1,-1));

    cout<<lcstd(s1, s2, 0, 0, vec)<<endl;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<bu(s1, s2, n, m, 0, 0);


}