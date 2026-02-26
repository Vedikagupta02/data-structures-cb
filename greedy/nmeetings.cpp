#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2){
    return p1.second<p2.second;
    
}

int main(){
    
    vector<int>st={1, 3, 0, 5, 8, 5};
    vector<int>et={2, 4, 6, 7, 9, 9};

    vector<pair<int,int>>vec;

    for(int i=0;i<st.size();i++){
        vec.push_back({st[i], et[i]});
    }
    
    sort(vec.begin(), vec.end(), comp);

    int cnt=1;
    int currmetend=vec[0].second;
    cout<<vec[0].first<<" "<<vec[0].second<<endl;

    for(int j=1;j<vec.size();j++){
        if(vec[j].first>currmetend){
            cout<<vec[j].first<<" "<<vec[j].second<<endl;
            cnt++;
            currmetend=vec[j].second;
        }
    }

    cout<<cnt<<endl;


}