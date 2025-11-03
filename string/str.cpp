#include <iostream>
using namespace std;
int main(){
    //string is non primitive data type

    // string s="hello";
    // cout<<s<<endl;
    // string a("hello");
    // cout<<a<<endl;

    // string s;
    //cin takes input till space
    // cin>>s;
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    //in string "+" sign is used to append one string to another
    //in char array we use strcat() function to append one char array to another
    string s=s1+s2;

    cout<<s<<endl;
    //in this we go char by char, we dont see the whole string or the length first but we give first preference to each char and ASCII value
    //for eg --> if comparing "abx" and "abcd"--> abx is greater bec 'x' has greater ASCII value than 'd'
    //if we compare "abc" and "abcd"--> abcd is greater bec it has more length
    if(s1>s2){
        cout<<"s1 is greater"<<endl;
    }
    else{
        cout<<"s2 is greater"<<endl;    
    }

    //substring is a continuous sequence of characters within a string
    //substring syntx is s.substr(starting index, length of substring)
    cout<<s1.substr(1)<<endl;
    cout<<s1.substr(1,2)<<endl;
    cout<<s.length()<<endl;
}