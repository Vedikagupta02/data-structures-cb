#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n; //378

    int x=n;
    int sum=0; //18
    while(x!=0){
        int d=x%10;
        sum+=d;
        x=x/10;

    }

    int temp=n;
    int total=0;

    for(int i=2;i<=temp;i++){
        while(temp%i==0){

            int p=i;
            while(p!=0){
                int dig=p%10;
                total+=dig;
                p=p/10;
            }
            
            temp=temp/i;
        }
        if(temp==1){
            break;
        }
    }
//the no that will be left after sqrt(temp) will always be a prime no when using for(int i=2;i<=sqrt(temp);i++)
    // int store=temp;
    // while(store!=0){
    //     int d=store%10;
    //     total+=d;
    //     store=store/10;
    // }

    if(sum==total){
        cout<<1<<endl;
    }

    else{
        cout<<0<<endl;
    }






}