#include <iostream>
using namespace std;
void multiply(int arr[], int no, int &noofdigtoiterate){

    int carry=0;
    int i;
    for( i=0; i<noofdigtoiterate;i++){
    int prod=no*arr[i] + carry;

    arr[i]=prod%10; //24%10=4
    carry=prod/10; //24/10=2
    }
    
    while(carry!=0){
        arr[i]=carry%10;
        carry=carry/10;
        noofdigtoiterate++;
        i++;
    }
}
void factbrokencal(int n){

    int arr[100000];

    arr[0]=1;
    int noofdigtoiterate=1;
    
    for(int no=1; no<=n; no++){
        multiply(arr, no, noofdigtoiterate);
    }

    for(int l=noofdigtoiterate-1;l>=0;l--){
        cout<<arr[l];
    }
    cout<<endl;

}
int main(){

    int n;
    cin>>n;

    factbrokencal(n);



}