#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){

    //if map is ordered then it sorts according to key -> tc is O(log n) bt for unordered map is O(1)
    map<string, int>h; 
    h.insert({"acb", 90});
    h.insert({"azb", 70});
    h["lmn"]=80;

    for(auto it: h){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    //Insert
    unordered_map<string, int>mp;

    mp["apple"] = 10;
    mp["banana"] = 20;
    mp.insert({"mango", 30});

    // Update
    mp["apple"] = 50;

    // Search
    if (mp.find("apple") != mp.end()) {
        cout << "Apple price: " << mp["apple"] << endl;
    }

    // Delete
    mp.erase("banana");

    // Iterate
    for (auto p : mp) {
        cout << p.first << " -> " << p.second << endl;
    }

    for(auto it : mp){
        if(it.first=="lmn"){
            cout<< "true";
        }
    }
}