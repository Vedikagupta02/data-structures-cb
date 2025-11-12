#include <iostream>
using namespace std;
void mergetwosortedarray(int arr[], int s, int e){
    int mid=s+e/2;
    int i=s;
    int j=mid+1;
    int temp[1000];
    int k=s;

    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }


    }

    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }

    while(j<=e){
        temp[k]=arr[j];
        j++;
        k++;
    }

    for(int i=s;i<=e;i++){
        arr[i]=temp[i];
    }
}
void mergesort(int arr[100], int s, int e){
    if(s==e){
        return;
    }

    int mid=s+e/2;

    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);

    mergetwosortedarray(arr, s, e);

}
int main(){
    int arr[6]={0,4,2,6,7};
    int n=6;
    mergesort(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}
