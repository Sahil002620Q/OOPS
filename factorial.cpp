#include <iostream>
using namespace std;

int factorial(int n) //via for loop
{
    int fact = 1;
    for(int i = n; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    cout << "factorial of 5 is: " << factorial(5);
}