#include <iostream>
using namespace std;
int main(){
    //to avoid garbage values till we get null, we add '\0'
    // char arr[6]={'A', 'E', 'I','O','U','\0'};
    //another way to declare char array
    // char arr[6]="AEIOU";
    //the no of elements is 6 bec '\0' is also added at the end
    //string is a set of char terminated by null

    // char arr[6]={'A', 'R', 'Q', 'U', 'I'};

    // int n=sizeof(arr)/sizeof(char);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<arr<<endl;

    //2 way of taking inp

    char arr[100];
    // cin>>arr;
    cin.getline(arr, 100,'$');

    //'$' jb tak hume inp lena hai jab tak dollar na aaye--> by default yeh '\n' nahi leta hai 
    //cin.get()--> ek char leta hai 
    //cin.getline() --> puri ek array leta hai as input


    cout<<arr<<endl;


}