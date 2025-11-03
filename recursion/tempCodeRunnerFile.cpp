#include <iostream>
using namespace std;

int solution[100][100]={0};

bool kyaqueenmairakhsaktiu(int n, int i, int j){
    //check for column
    for(int k=0;k<=i-1;k++){
        if(solution[k][j]==1){
            return false;
        }
    }

    //left dia
    int u=i-1;
    int v=j-1;

    while(u>=0 && v>=0){
        if(solution[u][v]==1){
            return false;
        }
        u--;
        v--;
    }
    //right dia

    int s=i-1;
    int t=j+1;

    while(s>=0 && t<n){
        if(solution[s][t]==1){
            return false;
        }
        s--;
        t++;

    }

    return true;
}


bool nqueen(int n, int i){
    if(i==n){

        for(int l=0;l<n;l++){
            for(int m=0;m<n;m++){
                cout<<solution[l][m]<<" ";
            }
            cout<<endl;
        }

        return true;
    }
    for(int j=0; j<n;j++){
    //check if we can keep the queen or not 
        if(kyaqueenmairakhsaktiu(n, i, j)){

            solution[i][j]=1; //mark as visited and give to recursion
            bool recans=nqueen(n, i+1); //send to recursion and
            if(recans==true){
                return true;
            }
            solution[i][j]=0; //backtrack

        }
    }
    //if we cannot keep queen anywhere in the row --> for all j's
    return false;
}
int main(){
    int n;
    cin>>n;
    nqueen(n,0);
}