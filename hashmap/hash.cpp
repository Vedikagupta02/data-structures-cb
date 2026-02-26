#include <iostream>
using namespace std;
class node{
public:
    string fn;
    int fc;
    node*next;

    node(string fnr, int fcr){
        fn=fnr;
        fc=fcr;
        next=NULL;

    }
};

class hashmap{
    node**arr;
    int ts;
    int cs;
public:
    hashmap(int size=5){
        arr=new node*[size];
        for(int i=0;i<size;i++){
            arr[i]=NULL;
        }
        ts=size;
        cs=0;

    }

    int hashfnc(string s ){
        int ans=0;
        int mult=1;

        for(int i=0;i<s.length();i++){
            ans=((ans%ts)+(s[i]%ts * mult%ts)%ts)%ts;
            mult=(mult*37)%ts;
        }

        return ans;
    }

    void rehashing(){
        node**oldarr=arr;
        int oldts=ts;
        arr=new node*[2*ts];
        ts=2*ts;

        for(int i=0;i<ts;i++){
            arr[i]=NULL;
        }
        cs=0;

        for(int i=0;i<oldts;i++){
            node*temp=oldarr[i];
            while(temp!=NULL){
                insert(temp->fn, temp->fc);
                temp=temp->next;
            }
        }

        delete [] oldarr;
        oldarr=NULL;
    }

    void insert(string fn, int fc){
        int ind=hashfnc(fn);
        node*n=new node(fn, fc);
        n->next=arr[ind];
        arr[ind]=n;
        cs++;

        if((cs/(1.0*ts))>0.4){
            rehashing();

        }
    }

    void printhm(){
        for(int i=0; i<ts;i++){
        node*temp=arr[i];

        cout<<i<<" "<<":";
        while(temp!=NULL){
            cout<<temp->fn<<", "<<temp->fc;
            temp=temp->next;
        }
        cout<<endl;
    }
}

};

int main(){

    //key is unique bt value can be repeated
    hashmap h;
    h.insert("abc", 50);
    h.insert("bac", 50);
    h.insert("cab", 50);
    h.insert("hsf", 50);
    h.printhm();

}