#include <iostream>
using namespace std;
int length(char arr[100]){
    int cnt=0;
    int i=0;
    while(arr[i]!='\0'){
        cnt++;
        i++;
    }

    return cnt;


}
int main(){
    char arr[100];
    //if we do int n=sizeof(arr)/sizeof(char)--> it will give 100 and not the size of arr input that we will take

    cin.getline(arr, 100); //'hell'
    //cin.getline() se hum space bhi cnt kr skate hai
    cout<<length(arr)<<endl;
    


}