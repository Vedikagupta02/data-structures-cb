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

bool palindrome(char arr[100]){
    int n=length(arr);
    int i=0;
    int j=n-1;

    while(i<=j){
        if(arr[i]!=arr[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    char arr[100];
    cin.getline(arr,100);

    int n=length(arr);

    cout<<palindrome(arr)<<endl;


    


}