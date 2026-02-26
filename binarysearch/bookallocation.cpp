#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool kyamidcapbooksfinishhorihai(vector<int>&bp, int n, int m, int capacity){
    int studentcnt=1;
    int pagesreadtillnow=0;

    for(int i=0; i<n;i++){
        if(pagesreadtillnow+bp[i]>capacity){
            studentcnt++;
            pagesreadtillnow=bp[i];
            if(studentcnt>m){
                return false;

            }

        }
        else{
            //current student to yeh book dedugi
            pagesreadtillnow+=bp[i];
        }
    }

    return studentcnt<=m;

}

int main(){

    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>bp;
    
        int sum=0;
        for(int i=0;i<n;i++){
            int d;
            cin>>d;

            bp.push_back(d);
            sum+=d;
        }
        int ans=0;

        int s=bp[n-1];
        int e=sum;

       
        while(s<=e){
            int mid=(s+e)/2;
            if(kyamidcapbooksfinishhorihai(bp, n, m, mid)){
            ans=mid;
            e=mid+1;


            }
            else{
                s=mid+1;
            }

        }

        cout<<ans<<endl;
        

    }


}