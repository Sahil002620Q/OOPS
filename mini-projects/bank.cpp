#include <iostream>
using namespace std;

class BankAccount
{
    private:
        int accountNumber;
        string holderName;

    protected:
        float balance = 0;

    public:
        BankAccount(int accountNumber,string holderName)
        {
            this->accountNumber = accountNumber;
            this->holderName = holderName;
        }

        void deposit(int amount)
        {
            balance += amount;
            cout << "Bank account credited with \033[92m\033[1m+" << amount << "$\033[0m\n" ;
        }

        void withdraw(int amount)
        {
            if(balance < amount)
            {
                cout << "\033[1mNot enough balance\033[0m\n";
            }
            else
            {
                balance -= amount;
                cout << "Bank account debited with \033[91m\033[1m-" << amount << "\033[0m$\n" ;
            }
        }

        void getBalance()
        {
            cout << "Current balance : " << balance << "$\033[0m\n" ;
        }

        void displayAccount()
        {
            cout << "\n==============================\n" ;
            cout << "\033[95mAccount number : "  << accountNumber << "\n" ;
            cout << "Account Holder : " << holderName << "\n" ;
            cout << "Current balance : " << balance << "$\n" ;
            cout << "\033[0m==============================\n\n" ;
        }
};

class SavingsAccount : public BankAccount
{
    private: 
        int interestRate;
    
    public:
        SavingsAccount(int accountNumber,string holderName,int intrestRate) : BankAccount(accountNumber,holderName) //constructor initializer list.
        {
            this->interestRate = interestRate;
        }
        void addInterest()
        {
            float intrest = balance*interestRate/100;
            balance += intrest;
            cout << "Interest credit amount : \033[92m\033[1m+" << intrest << "$\033[0m\n" ;
        }
};

class CurrentAccount : public BankAccount
{
    private:
        int overdraftLimit ;

    public:
        CurrentAccount(int accountNumber,string holderName,int overdraftLimit) : BankAccount(accountNumber,holderName) //constructor initializer list.
        {
            this->overdraftLimit = overdraftLimit;
        }
        void withdraw(int amount)
        {      //-3000     >= -2000
            if((balance - amount) >= -overdraftLimit && balance > (-overdraftLimit))
            {
                balance -= amount;
                cout << "Bank account debited with \033[91m\033[1m-" << amount << "$\033[0m\n" ;
                cout << "current balance : \033[91m\033[1m" << balance << "$\033[0m\n" ;
            }
            else
            {
                cout << "\033[1m\033[93mOverdraft limit exceeded \033[0m\n";
            }
        }
};

int main()
{
    // BankAccount pnb(2513494,"Sahil");
    // pnb.deposit(2000);
    // pnb.deposit(5000);
    // pnb.deposit(6000);
    // pnb.withdraw(3000);
    // pnb.getBalance();
    
    // pnb.displayAccount();

    // SavingsAccount pnb;
    // pnb.deposit(2000);
    // pnb.deposit(5000);
    // pnb.deposit(6000);
    // pnb.withdraw(3000);
    // pnb.addInterest();
    
    // pnb.displayAccount();

    CurrentAccount pnb2(251,"sahil",2000);
    // pnb2.deposit(12000);
    // pnb2.deposit(5000);
    pnb2.deposit(2000);  
    pnb2.withdraw(1500);
    pnb2.withdraw(2501);

    pnb2.displayAccount();
    
    // pnb.displayAccount();
}