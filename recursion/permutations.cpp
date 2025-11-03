#include <iostream>
//if we use string we dont need to swap back bec they are passed by value
using namespace std;
void permutations(char arr[1000], int i ){

    if(arr[i]=='\0'){
        cout<<arr<<endl;
        return; 
    }

    for(int j=i;arr[j]!='\0';j++){

        swap(arr[i], arr[j]);
        permutations(arr, i+1);
        //to backtrack so that the char array doesnt change
        swap(arr[i], arr[j]); //backtracking
    }

}
int main(){
    char arr[1000];
    cin.getline(arr,1000);
    permutations(arr, 0);
}