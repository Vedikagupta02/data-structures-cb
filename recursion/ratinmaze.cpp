#include <iostream>
using namespace std;
bool ratmaze(char arr[4][5], int r, int c, int i, int j, int sol[4][5]){

    //mark src as visited and check if we can go forward
    //then chcek neeche
    //backtrack
    //1-->check aage-->check neeche-->0 (backtrack)

    //base case
    if(i==r-1 && j==c-2){
        sol[i][j]=1;
        for(int p=0;p<r;p++){
            for(int q=0;q<c-1;q++){
                cout<<sol[p][q]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        //to print multiple ways we return false
        //but to print one way we return true
        sol[i][j]=0;
        return false;

    }
    //mark visited
    sol[i][j]=1;

    // forward
    if(j<c-2 && arr[i][j+1]!='O'){
        bool recans=ratmaze(arr, r, c, i, j+1, sol);
        if(recans==true){
            return true;
        }
    }

    //backward
    if(i<r-1 && arr[i+1][j]!='O'){
        bool recans=ratmaze(arr, r, c, i+1, j, sol);
        if(recans==true){
            return true;
        }
    }
    
    //backtrack
    sol[i][j]=0;
    return false;



}
int main(){
      char arr[4][5]={
        "XXOX",
        "XXOX",
        "XXXO",
        "OOXX"
      };

      int sol[4][5]={0};

      ratmaze(arr, 4, 5, 0, 0, sol);

}