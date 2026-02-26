#include <bits/stdc++.h>
using namespace std;
vector<int>maxmincandy(vector<int>&price, int k,int n){
    sort(price.begin(), price.end());

    int minc=0;
    int j=n-1;
    int i=0;
    while(j>=i){

        minc+=price[i];
        i++;
        j=j-k;
    }

    int maxc=0;
    int l=n-1;
    int m=0;

    while(l>=m){
        maxc+=price[l];
        l--;
        m=m+k;
    }

    return {minc, maxc};
}
int main(){
    int n;
    cin>>n;

    vector<int>price={3,2,1,4};
    int k;
    cin>>k;

    vector<int>ans=maxmincandy(price, k,n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    
}