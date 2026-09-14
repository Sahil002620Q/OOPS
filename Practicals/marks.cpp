#include <iostream>
#include <iomanip>
using namespace std;

class marks
{
    private:
        string name;
        int marks;
    
    public:
        void get()
        {
            cout << "Enter your name  : " ;
            cin >> name ;
            cout << "Enter your marks  : " ;
            cin >> marks ;
        }
};

void menu()
{
    cout << left << setw(10) << "sahil";
    cout << string(30,'=');
}

int main()
{
    menu();
} 
