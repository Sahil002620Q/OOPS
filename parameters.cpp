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
    obj.Age(19);
}
