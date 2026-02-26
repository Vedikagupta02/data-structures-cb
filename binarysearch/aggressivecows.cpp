#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool amiabletoplaceallcowswithminatsafestdist(vector<long long int>&pos, int n, int c, int mid){

    int cp=1;
    int prevcow=pos[0];
    for(int j=1; j<n;j++){

        if(pos[j]-prevcow>=mid){
            cp++;
            prevcow=pos[j];

            if(cp==c){
                return true;
            }

        }
    }
    return false;


}

int main(){

    int n;
    cin>>n;

    int c;
    cin>>c;

    vector<long long int>pos;
    for(int i=0;i<n;i++){
        long long int d;
        cin>>d;

        pos.push_back(d);
    }

    sort(pos.begin(), pos.end());

    long long int s=pos[0];
    long long int e=pos[n-1]-pos[0];
    long long int ans=0;
    

    while(s<=e){
        long long int mid=s+(e-s)/2;

        if(amiabletoplaceallcowswithminatsafestdist(pos, n, c, mid)==true){
            ans=mid;
            s=mid+1;


        }
        
        else{
            e=mid-1;
        }
    }
    cout<<ans;

}