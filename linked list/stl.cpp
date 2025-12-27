#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    list<int>mylist;

    mylist.push_back(20);
    mylist.push_front(30);
    mylist.push_back(100);
    mylist.push_back(200);

    for(int d : mylist){
        cout<<d<<endl;
    }

}
