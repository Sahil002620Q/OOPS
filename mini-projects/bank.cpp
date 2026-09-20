#include <iostream>
#include <thread>
#include <chrono>
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

void menu()
{
    system("cls");
    cout << "==============================\n";
    cout << "   BANK MANAGEMENT\n";
    cout << "==============================\n\n";
    cout << "1. Savings Account\n";
    cout << "2. Current Account\n";
    cout << "3. Normal Bank Account\n";
    cout << "4. Exit\n\n";
    cout << "Enter choice: ";
}

void saving()
{
    system("cls");
    cout << "==============================\n";
    cout << "   SAVINGS ACCOUNT\n";
    cout << "==============================\n\n";
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Add Interest\n";
    cout << "4. Check Balance\n";
    cout << "5. Account Details\n";
    cout << "6. Back\n\n";
    cout << "Enter choice:\n";
}

void sleep()
{
    this_thread::sleep_for(chrono::milliseconds(3000));
}

void cnt()
{
    cout << "Enter to continue: ";
}

int main()
{
    while(true)
    {

        menu();
        int choice ;
        cin >> choice ;
        
        if (choice == 1)
        {
            saving();
        cin >> choice ;
        SavingsAccount pnb(2513494,"Sahil",8) ;
        
        // pnb.deposit(5000);
        // pnb.deposit(6000);
        // pnb.withdraw(3000);
        // pnb.addInterest();
        
        pnb.displayAccount();
        if (choice == 1)
        {
            int amount;
            cout << "Enter amount to deposite: "; cin >> amount;
            pnb.deposit(amount);
            sleep();
            cnt();
            saving(); 
            
        }
        else if (choice == 2)
        {
            /* code */
        }
        else if (choice == 3)
        {
            /* code */
        }
        else if (choice == 3)
        {
            pnb.displayAccount();  
            sleep();
            cnt();
            saving(); 

        }
    }
    else if (choice == 2)
    {
        /* code */
    }
    else if (choice == 3)
    {
        /* code */
    }
    else if (choice == 4)
    {
        exit(0);
    }
    else if (choice == 5)
    {
        /* code */
    }
    else if (choice == 6)
    {
        /* code */
    }
    else if (choice == 7)
    {
        /* code */
    }
    else if (choice == 8)
    {
        /* code */
    }
    
}
    
    
    
    // BankAccount pnb(2513494,"Sahil");
    // pnb.deposit(2000);
    // pnb.deposit(5000);
    // pnb.deposit(6000);
    // pnb.withdraw(3000);
    // pnb.getBalance();
    
    // pnb.displayAccount();

    

    // CurrentAccount pnb2(251,"sahil",2000);
    // // pnb2.deposit(12000);
    // // pnb2.deposit(5000);
    // pnb2.deposit(2000);  
    // pnb2.withdraw(1500);
    // pnb2.withdraw(2501);

    // pnb2.displayAccount();
    
    // // pnb.displayAccount();
}