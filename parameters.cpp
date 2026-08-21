#include <iostream>
using namespace std;

class Myclass
{
    public : 
        void Age(int age);
};

void Myclass::Age(int age)
{
    cout << "your age is " << age << endl;
}
    
int main() {
    Myclass obj;
    int age;
    cout << "Enter your age : " ; cin >> age ;
    obj.Age(age);
}
