 #include <iostream>
 using namespace std;
 int main(){
    int total;
    cin>>total;
    int no;
    int xorr=0;
    for(int i=1;i<=total-1;i++){
        cin>>no;
        xorr=xorr^no;

        
    }

    int xorr1=0;
    for(int j=1;j<=total;j++){
        xorr1=xorr1^j;
    }

    cout<<(xorr^xorr1)<<endl;
    return 0;
 }