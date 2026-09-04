#include <iostream>
#include "colors.h"
using namespace std;


int main () 
{
    int choice;
    system("clear");
    setThemeOLED();
    cout << BRIGHT_GREEN ;
    cout << "====================================="   << endl ;
    cout << "           [ NETPLUS CLI ]  "             << endl ;
    cout << "=====================================\n" << endl ;
    cout << "[1] Get Public IPV4  " << endl ;
    cout << "[2] Get Public IPV6  " << endl ;
    cout << "[3] Get Private IPV4  " << endl ;
    cout << "[4] Get Private IPV4  " << endl ;
    cout << "[5] Get Local IPV4  " << endl ;
    cout << "[6] Get Local IPV4  " << endl ;
    cout << "[6] Scan all open TCP/UDP ports " << endl ;
    cout << "[6] Fetch current longitude and lattitude   \n" ;
    cout << RESET << endl ;
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
    // resetTerminalBackground();
    cout << endl ;

}