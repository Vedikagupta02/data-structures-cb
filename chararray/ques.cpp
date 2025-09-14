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
void appendbtoa(char a[100], char b[100]){
    int n=length(a);
    int lengthofb=length(b);
    int i=0;
    int j=n;

    while(i<=lengthofb){
        a[j]=b[i];
        i++;
        j++;
    }



}
int main(){
    char a[100];
    char b[100];
    cin.getline(a,100);
    cin.getline(b,100);
    
    appendbtoa(a,b);
    cout<<a<<endl;
    cout<<b<<endl;


}