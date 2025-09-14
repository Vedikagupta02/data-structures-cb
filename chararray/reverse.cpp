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
    char a[100];
    cin.getline(a,100);
    int n=length(a);
    int i=0;
    int j=n-1;

    while(i<=j){
        swap(a[i], a[j]);
        i++;
        j--;
    }

    cout<<a<<endl;
}