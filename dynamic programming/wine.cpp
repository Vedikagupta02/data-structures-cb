#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//jitne bhi variables bhi dp lagra hai uss hisab se 1d,2d,3d dp lagta hai 
int wine(vector<int>winebottl, int left, int right, int year ){

    if(left>right){
        return 0;
    }

    int op1=year*winebottl[left]+wine(winebottl, left+1, right, year+1);
    int op2=year*winebottl[right]+wine(winebottl, left, right-1, year+1);

    return max(op1, op2);

}

int winetd(vector<int>winebottl, int left, int right, int year,vector<vector<int>> &arr){

    if(left>right){
        return arr[left][right]=0;
    }

    if(arr[left][right]!=-1){
        return arr[left][right];
    }

    int op1=year*winebottl[left]+wine(winebottl, left+1, right, year+1);
    int op2=year*winebottl[right]+wine(winebottl, left, right-1, year+1);

    return arr[left][right]=max(op1, op2);


}

int winebu(vector<int>winebottl, int n){

    vector<vector<int>> arr(100, vector<int>(100, -1));

    //diagonal
    for(int i=0;i<n;i++){
        
        arr[i][i]=n*winebottl[i];
    }

    for(int cr=n-2; cr>=0;cr--){
    for(int cc=0; cc<n;cc++){

    if(cc>cr){
        int year=n-(cc-cr);

        int op1=year*winebottl[cr]+arr[cr+1][cc];
        int op2=year*winebottl[cc]+arr[cr][cc-1];
        arr[cr][cc]=max(op1, op2);

    }
    }
    }
    return arr[0][n-1];

}

int main(){

    vector<int>winebottl={2,3,5,1,4};
    int n=5;

    cout<<wine(winebottl, 0, n-1, 1);

    vector<vector<int>> arr(100, vector<int>(100, -1));


    cout<<winetd(winebottl, 0, n-1, 1, arr);



}