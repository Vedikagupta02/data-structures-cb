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
void reversefunc(char a[100]){
    int n=length(a);
    int i=0;
    int j=n-1;

    while(i<=j){
        swap(a[i], a[j]);
        i++;
        j--;
    }
}
int main(){
    int k;
    cin>>k;

    char a[100];
    cin.getline(a,100);

    int n=length(a);
    int actual=k%n;

    reversefunc(a);
    cout<<a<<endl;
    int i=0;
    int j=actual-1;
    while(i<=j){
        swap(a[i], a[j]);
        i++;
        j--;
    }

    int p=k;
    int q=n-1;
    while(p<=q){
        swap(a[p], a[q]);
        p++;
        q--;
    }
    cout<<a<<endl;
    





}