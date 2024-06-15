#include <iostream>
using namespace std;
//bank account: access specifiers

class bankAcc{
    protected:
        float balance;
    public:
        bankAcc(float initialBalance=0.0):balance(initialBalance){}
        void deposit(float amount){
            cout<<"deposit: ";
            balance+=amount;
        }
        float getBalance(){
            return balance;
        }
};
class checkingAcc:public bankAcc{
    public:
        checkingAcc(float initialBalance=0.0):bankAcc(initialBalance){}
        void deposit(float amount){
            balance+=amount;
            cout<<"new balance: "<<getBalance()<<endl;
        }
        void withdraw(float amount){
            if(amount<=getBalance()){
                balance-=amount;
                cout<<"widthdrawal successful. new balance: "<<getBalance()<<endl;
            }else{
                cout<<"insufficient balance"<<endl;
            }
        }
};
int main(){
    checkingAcc c(100);
    c.deposit(50);
    c.withdraw(20);

    return 0;
}
