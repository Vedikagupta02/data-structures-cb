#include <iostream>
using namespace std;

int pivotkaindex(int arr[], int s, int e){

    int pivotel=arr[e];
    //i utni window sambhal ke rakh raha hai jitne lements pivotel se kam hai aur j pure array pe traverse karra hai 
    //i->kitne el pivotel se chote hai 
    //j->traverse the array
    int i=s-1;
    for(int j=s; j<e;j++){
        if(arr[j]<=pivotel){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[e]);

    return i+1;

    


}

void quicksort(int s, int e, int arr[]){

    if(s<e){

        int ind=pivotkaindex(arr, s, e);
        quicksort(s, ind-1, arr);
        quicksort(ind+1, e, arr);
    }

}
int main(){

    int arr[]={3,1 , 6, 8, 2, 1, 1, 0, 4, 13, 12, 5, 7, 9, 5};
    int n=sizeof(arr)/sizeof(int);
    quicksort(0, n-1, arr);

}