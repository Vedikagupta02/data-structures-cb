#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
public:
    char ch;
    bool isterminal;
    unordered_map<char, node*>mp;

    node(char c){
        ch=c;
        isterminal=false;
    }


};

class trie{
    
    node*root;
public:
    trie(){
        root=new node('\0');
    }

    void insert(string s){

        node*temp=root;

        for(int i=0; s[i]!='\0' ;i++){
            char ch=s[i];

            if(!temp->mp.count(ch)){
                temp->mp[ch]=new node(ch);
                temp=temp->mp[ch];

            }
            else{
                temp=temp->mp[ch];


            }

        }
        temp->isterminal=true;
        
    }

    bool search(string s ){

        node*temp=root;

        for(int i=0; s[i]!='\0' ;i++){
            char ch=s[i];

            if(temp->mp.count(ch)){
                temp=temp->mp[ch];
            }
            else{
                return false;
            }
        }
        return temp->isterminal;
        
    }

};

int main(){

    trie t;
    t.insert("coder");
    t.insert("coding");
    t.insert("codpr");
    t.insert("dog");
    t.insert("mad");
    t.insert("map");

    cout<<t.search("code");

}