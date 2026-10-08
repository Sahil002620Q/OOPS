#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
int main () {
    // thread t;
   while (true)
   {
    //  system("powershell -Command \"[console]::beep(800,500)\"");
     system("powershell -Command \"[console]::beep(1000,500)\"");
     this_thread::sleep_for(chrono::milliseconds(800));
   }
      
}