#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool kyamiarakhsaktiu(int mat[9][9], int i, int j, int num, int n){

    //vertical

    for(int k=0;k<n;k++){
        if(mat[k][j]==num){
            return false;
        }
    }

    //horizontal

    for(int l=0;l<n;l++){
        if(mat[i][l]==num){
            return false;
        }
    }

    //root n
    int q=sqrt(n);
    int si=(i/q)*q;
    int sj=(j/q)*q;

    for(int u=si;u<=si+q-1;u++){
        for(int v=sj; v<=sj+q-1;v++){
            if(mat[u][v]==num){
                return false;
            }

        }

    }



    return true;

}

bool sodukosolver(int mat[9][9], int i, int j, int n){
    //base case
    if(i==n){
        for(int l=0;l<n;l++){
            for(int m=0;m<n;m++){
                cout<<mat[l][m]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    if(j==n){
        return sodukosolver(mat, i+1, 0, n);
    }

    //recursive case
    if(mat[i][j]!=0){
        return sodukosolver(mat, i, j+1, n);
    }
    else{
        for(int num=1; num<=9; num++){
            if(kyamiarakhsaktiu(mat, i, j,num, n)){
                mat[i][j]=num;
                bool recans=sodukosolver(mat, i, j+1, n);
                
                if(recans==true){
                    return true;
                }
                mat[i][j]=0;

            }
        }
        return false;
    }
    

}

int main(){
    int mat[9][9]={
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}


    };

    sodukosolver(mat, 0, 0, 9);
}