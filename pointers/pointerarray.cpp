#include <iostream>
using namespace std;
int main(){
    
    int arr[]={3,2,5,6,7};
    //prints peheli bucket ki pehele byte ka address
    cout<<arr<<endl;
    //prints first byte ka address
    cout<<&arr[0]<<endl;
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;

    cout<<arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<&arr[0]+1<<endl;
    cout<<arr[1]<<endl;
    

    //arr+i==&arr[i]
    
}