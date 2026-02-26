#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string func(vector<string>&arr, int k, int n){

    vector<vector<string>>alagalag;

    for(int l=0;l<n;l++){
        vector<string> block;

        int i=0;
        while(i<arr[l].length()){
            int j=i;
            string word="";
            while(j<arr[l].length() && arr[l][j]!=' '){
                word+=arr[l][j];
                j++;

            }
            block.push_back(word);
            i=j+1;

        }

        alagalag.push_back(block);

    }
    
    vector<pair<int,int>>intervals;
    for(int i=0;i<alagalag.size();i++){
        int m=alagalag[i].size();

        string start=alagalag[i][m-2];
        string end=alagalag[i][m-1];

        int s=stoi(start);
        int e=stoi(end);

        intervals.push_back({s,e});

    }

    sort(intervals.begin(), intervals.end());

    vector<pair<int,int>>final;
    int curr_star=intervals[0].first;
    int curr_end=intervals[0].second;

    for(int i=1;i<intervals.size();i++){
        if(intervals[i].first<=curr_end){
            curr_end=max(curr_end, intervals[i].second);
        }
        else{
            final.push_back({curr_star, curr_end});
            curr_star=intervals[i].first;
            curr_end=intervals[i].second;
        }

    }
    final.push_back({curr_star, curr_end});

   
    if (final[0].first >= k) {
        return to_string(0);
    }


    for (int i = 1; i < final.size(); i++) {
        int gap = final[i].first - final[i-1].second;
        if (gap >= k) {
            return to_string(final[i-1].second);
        }
    }

    // after last meeting
    return to_string(final.back().second+1);


    
    return "-1";





}
int main(){
    int n;
    cin>>n;

    vector<string>arr;
    cin.ignore();

    for(int i=1;i<=n;i++){
        string str;
        getline(cin, str);
        arr.push_back(str);
    }

    int k;
    cin>>k;

    cout<<func(arr, k, n);
}