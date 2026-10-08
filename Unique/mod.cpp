#include <iostream>
#include <chrono>
#include <thread>
#define GREEN "\033[92m"
#define RED "\033[91m"
#define RESET "\033[0m"
#define INTENSITY 250

using namespace std;
int main()
{
    while(true)
    {
        // cout << GREEN << "    * \r\r\r\r\r\r" << RESET ;
        cout << RED << "   Aura   \r\r\r\r\r\r\r\r" << RESET;
        this_thread::sleep_for(chrono::milliseconds(INTENSITY));
        cout << RED << "   Aura+\r\r\r\r\r\r\r\r" << RESET;
        this_thread::sleep_for(chrono::milliseconds(INTENSITY));
        cout << RED << "   Aura++\r\r\r\r\r\r\r" << RESET;
        this_thread::sleep_for(chrono::milliseconds(INTENSITY));
        cout << RED << "   Aura+++\r\r\r\r\r\r\r\r" << RESET;
        this_thread::sleep_for(chrono::milliseconds(INTENSITY));
    }
}