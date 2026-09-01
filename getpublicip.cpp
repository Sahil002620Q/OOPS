#include <iostream>
#include "colors.h"
using namespace std;


int main () 
{
    int choice;
    system("clear");
    setThemeOLED();
    cout << BRIGHT_GREEN << "=====================================  "  << RESET<< endl ;
    cout << BRIGHT_GREEN << "           [ NETPLUS CLI ]  "              << RESET<< endl ;
    cout << BRIGHT_GREEN << "=====================================  \n"  << RESET<< endl ;
    cout << BRIGHT_GREEN << "[2] Get Public IPV6  "  << RESET<< endl ;
    cout << BRIGHT_GREEN << "[3] Get Private IPV4  "  << RESET<< endl ;
    cout << BRIGHT_GREEN << "[4] Get Private IPV4  "  << RESET<< endl ;
    cout << BRIGHT_GREEN << "[5] Get Local IPV4  "  << RESET<< endl ;
    cout << BRIGHT_GREEN << "[6] Get Local IPV4  "  << RESET<< endl ;
    cout << BRIGHT_GREEN << "[6] Scan all open TCP/UDP ports "  << RESET << endl ;//
    cout << BRIGHT_GREEN << "[6] Give me longitude and lattitude   \n"  << RESET<< endl ;
    cout << BRIGHT_RED << HIDE_CURSOR << "Enter your choice : " ; cin >> choice ; cout << RESET ;
        
    if(choice == 1)
        {
            cout << "Public IPV4 : " ;
            system("sleep 0.2");
            system("curl -4 ifconfig.net");
        }
        else if(choice == 2)
        {  
            cout << "Public IPV6 : " ;
            system("curl -6 ifconfig.net");
        }
        else if(choice == 3)
        {
            cout << "Private IPV4 : " ;
            cout << BRIGHT_RED << system("curl ifconfig.net"); cout << RESET ;
        }
        else if(choice == 4)//
        {
            cout << "Private IPV6 : " ;
            cout << RED << system("curl ifconfig.net"); cout << RESET ;
        }
        else if(choice == 5)//
        {
            cout << "Local IPV4 : 127.0.0.1" ;
        }
        else if(choice == 6) //
        {
            cout << "Local IPV6 : [::1]\n" ;

        }
        else if(choice == 7) //
        {
            cout << "PORT/TL  STATE SERVICE" ;
            system("nmap localhost | grep -e /tcp -e /udp");

        }
        else if(choice == 6) //
        {
            cout << "Local IPV6 : [::1]\n" ;

        }
        else
        {
            
        }
    resetTerminalBackground();
    cout << endl ;

}