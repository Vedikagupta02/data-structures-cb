#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int mincost(vector<vector<int>>&arr, int n, int m, int x, int y){
    if(x<0 || y<0){
        return INT_MAX;
    }

    if(x==0 && y==0){
        return arr[x][y];
    }

    int op1= mincost(arr, n, m, x-1, y);
    int op2=mincost(arr, n, m, x, y-1);

    return arr[x][y] + min(op1, op2);

}

int mincosttd(vector<vector<int>>&arr, int n, int m, int x, int y,  vector<vector<int>>&a){

    if(x==0 && y==0){
        return a[x][y]=arr[x][y];
    }

    if(x<0 || y<0){
        return INT_MAX;
    }

    

    if(a[x][y]!=-1){
        return a[x][y];
    }

    int op1= mincosttd(arr, n, m, x-1, y, a);
    int op2=mincosttd(arr, n, m, x, y-1, a);

    return a[x][y]=arr[x][y] + min(op1, op2);

}


int mincostbu(vector<vector<int>>&arr, int n, int m, int x, int y){

    vector<vector<int>>a(n, vector<int>(m, -1));


    for(int i=0; i<=x;i++)
    for(int j=0; j<=y;j++){

    if(i==0 && j==0){
        a[i][j]=arr[i][j];
    }

    else if(i==0){
        a[i][j]=a[i][j-1]+ arr[i][j];
    }

    else if(j==0){
        a[i][j]=a[i-1][j] + arr[i][j];
    }
    else{
        a[i][j]=arr[i][j]+min(a[i-1][j], a[i][j-1]);
    }

    
}
    
    return a[x][y];

    
}
int main(){

    int n;
    int m;
    cin>>n;
    cin>>m;

    int x;
    int y;
    cin>>x>>y;

    vector<vector<int>>arr(n, vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<mincost(arr, n, m, x, y);

    vector<vector<int>>a(n, vector<int>(m, -1));
    mincosttd(arr, n, m, x, y, a);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<mincostbu(arr, n, m, x, y);



    



}