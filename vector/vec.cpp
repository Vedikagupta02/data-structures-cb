#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;

    //capacity ka matlab total kia size hai vec ka
    //length matlab kitne elements hai
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout<<v.size()<<endl; //5
    cout<<v.capacity()<<endl; //8

    v.pop_back();

    cout<<v.size()<<endl; //4
    cout<<v.capacity()<<endl; //8

    //capacity remains the same bt size changes 

    vector<int> v2(3, 5);   //3 size vector and fill it with 5

    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    
    

}