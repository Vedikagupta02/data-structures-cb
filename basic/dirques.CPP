#include <iostream>
using namespace std;
int main(){
    // int x=10, y=20;
    // float z=45.65;
    int x=0;
    int y=0;

    //we will use cin.get() because cin ignores whitespace, enter and tab and it will continue and go to garbage values 

    char ch;
   ch= cin.get();
    while(ch!='\n'){

    if(ch=='S'){
        y--;
    }
    else if(ch=='N'){
        y++;
    }
    else if(ch=='E'){
        x++;
    }
    else{
        x--;
    }

    ch=cin.get();
}

    cout<<x<<" "<<y<<endl;

    if(x>=0 && y>=0){
        for(int i=1;i<=x;i++){
            cout<<'E';
        }
        for(int i=1;i<=y;i++){
            cout<<'N';
        }
        
        cout<<endl;

    }
    else if(x<=0 && y>=0){
        for(int i=1;i<=y;i++){
            cout<<'N';
        }
        for(int i=1;i<=abs(x);i++){
            cout<<'W';
        }
        
        cout<<endl;
        

    }
    else if(x<=0 && y<=0){
        for(int i=1;i<=abs(y);i++){
            cout<<'S';
        }
        for(int i=1;i<=abs(x);i++){
            cout<<'W';
        }
       
        cout<<endl;

    }
    else{
        for(int i=1;i<=x;i++){
            cout<<'E';
        }
        for(int i=1;i<=abs(y);i++){
            cout<<'S';
        }
        cout<<endl;
    }





}