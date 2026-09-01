#include <iostream>
using namespace std;
class BankAccount{
    private:
    int accountNumber;
    double balance;
    public:
    BankAccount(int accountNo, double bal){
        accountNumber=accountNo;
        balance=bal;
    }
    friend void comBalance(BankAccount a, BankAccount b);
};
    void comBalance(BankAccount a, BankAccount b){
        if(a.balance>b.balance)
        cout<<"Acc no "<<a.accountNumber<<" has higher balance than B"<<endl;
        else if(b.balance>a.balance)
            cout<<"Acc no "<<b.accountNumber<<" has higher balance than A"<<endl;
        else
        cout<<"Both have equal balnce"<<endl;
    }
    int main(){
        BankAccount a1(101,45000);
        BankAccount a2(102,62000);
        comBalance(a1,a2);
        return 0;
    }
