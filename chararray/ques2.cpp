#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore(); //ignores one character
    // bec if we press enter the int will go into the buffer and add a '\n' in the buffer
    //if we get a '\n'-->cin/getline() cannot read the input
    
    char arr[100];
    cin.getline(arr,100);
    //if we write after this, it ignores the '\n' after the getline() input
    cin.ignore();

    cout<<n<<endl;
    cout<<arr<<endl;

     

}