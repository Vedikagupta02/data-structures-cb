#include <iostream>
using namespace std;

class Bank{
private:
    double balance;
public:
    Bank(double initial){
        balance=initial;
    }

    void deposit(int amount){
        balance+=amount;
    }

    void withdraw(int amount){
        if(amount<=balance){
            balance=balance-amount;
        }
        else{
            cout<<"not enough balance"<<endl;
        }
    }

    int getBalance(){
        return balance;
    }

};

int main(){
    Bank b1(1000);
    b1.deposit(7000);
    b1.withdraw(1000);
    cout<<b1.getBalance()<<endl;


}