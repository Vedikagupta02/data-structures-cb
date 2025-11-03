#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[100];
    int t;
    cin>>t;
    while(t--){
    int sum=0;   
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    //linear pe kadane

    int cs=0;
    int msl=INT_MIN;

    for(int i=0;i<n;i++){
        cs+=arr[i];
        msl=max(msl, cs);
        if(cs<0){
            cs=0;
        }
    }

    //array ko negate
    for(int i=0;i<n;i++){
        arr[i]=-1*arr[i];
    }
 
    //phirse kadane on negate array

    cs=0;
    int a=INT_MIN;

    for(int i=0;i<n;i++){
        cs+=arr[i];
        a=max(a, cs);
        if(cs<0){
            cs=0;
        }
    }

    int msc=sum-(-a);

    int final=max(msl, msc);
    cout<<final<<endl;

}
}