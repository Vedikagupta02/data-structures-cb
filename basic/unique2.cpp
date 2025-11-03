#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cin>>n;

    int xorr=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        xorr=xorr^arr[i];
    }
    
    int y=xorr;
    int pos=0;

    while((xorr&1)!=1){
        pos++;
        xorr=xorr>>1;

    }

    int mask=1<<pos;
    int xorr1=0;
    int xorr2=0;


    for(int i=0;i<n;i++){
        if((mask&arr[i])==0){
            xorr1=xorr1^arr[i];


        }
        else{
            xorr2=xorr^arr[i];

        }
    }
    cout<<xorr1<<" "<<xorr2<<endl;


}