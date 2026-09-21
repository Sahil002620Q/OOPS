#include <iostream>
using namespace std;

int main() 
{
    int score;
    cout << "Enter Your marks: " ; cin >> score;

    if(score < 40)
    {
        cout << "Grade: \033[91mF\033[0m";
    }
    else if (score <= 49)
    {
        cout << "Your Final Grade is: \033[91mD\033[0m";
    }
    else if (score <= 59)
    {
        cout << "Your Final Grade is: \033[93mC\033[0m";
    }
    else if(score <= 69)
    {
        cout << "Your Final Grade is: \033[93mB\033[0m";
    }
    else if(score <= 79)
    {
        cout << "Your Final Grade is: \033[92mB+\033[0m";
    }
    else if(score <= 89)
    {
        cout << "Your Final Grade is: \033[92mA\033[0m";
    }
    else if(score>=90 && score <=100)
    {
        cout << "Your Final Grade is: \033[92mA+\033[0m";
    }
    else
    {
       cout << "Enter a vailed score";
    }
    return 0;
}
