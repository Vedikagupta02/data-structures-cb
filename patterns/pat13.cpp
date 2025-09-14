#include <iostream>
using namespace std;
int main(){
    int total;
    cin>>total;
    int stno=1;
    for(int rowno=1;rowno<=total;rowno++){

        for(int i=1;i<=rowno;i++){
            cout<<stno<<'\t';
            stno++;
        }
        cout<<endl;

    }
    return 0;
}