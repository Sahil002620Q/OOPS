#include <iostream>
#include <chrono>
#include <thread>
#define RED "\033[91m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define RESET "\033[0m"
using namespace std;
class Account
{
    public:
    static int pass ;

    void login()
    {
        int usrpass;
        cout << "Enter password : " ; cin >> usrpass ;
        if (usrpass == pass)
        {
            cout << "\033[92mWelcome\n\033[0m";
        }
        else
        {
            cout << "\033[91mwrong credential, try again\a\n\033[0m";
            login();
        }
    }

    void changepass()
    {
        int usr_pass;
        int recheck;
        cout << "Enter old password : " ; cin >> usr_pass ;
        if (usr_pass == pass)
        {
            cout << "Enter new password : " ; cin >> usr_pass ;
            cout << "Re-Enter new password : " ; cin >> recheck ;
            if(usr_pass == recheck)
            {
                pass = usr_pass;
            }   
        }
        else
        {
            cout << "\033[91mIncorrect password, try again\a\n\033[0m";
            changepass();
        }
    }
};

int Account::pass = 0000;

int menu()
{
    cout << GREEN << "Private text vault" << RESET << endl ;
    cout << "1. Login\n" ;
    cout << "2. Change password\n" ;
    int choice;
    cout << YELLOW << "Enter your choice : " ; cin >> choice; cout << RESET ;
    return choice;
}

int main()
{
    Account x, y;
    while(true)
    {
        system("cls");
        int choice = menu();
        if (choice == 1)
        {
            x.login(); 
            exit(0);
        }
        else if (choice == 2)
        {
            x.changepass(); 
            system("cls");
            cout << "Password changed Sucessfully\n";
            this_thread::sleep_for(chrono::milliseconds(2000)); 
            system("cls");
            choice = menu();
        }
    }
    

}