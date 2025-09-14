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
void copy(char a[100],char b[100] ){
    int n=length(a);
    int i=0;
    int j=0;
    while(i<=n){
        b[j]=a[i];
        i++;
        j++;

    }
}
int main(){
    char a[100];
    cin.getline(a,100);

    char b[100];

    copy(a,b);

    cout<<a<<endl;
    cout<<b<<endl;


}