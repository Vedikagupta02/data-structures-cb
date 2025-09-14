#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int no=2;no<=n;no++){
        int i=2;
        for(;i<=no;i++){
            if(no%i==0){
                break;
                
            }
        }

        if(i==no){
            cout<<no<<endl;
        }

    }
    
}