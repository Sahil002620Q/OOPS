#include <iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imaginary;

    public:
    Complex() = default;

    Complex(int real,int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void display()
    {
        cout << "Real part: " << real << endl
             << "Imagenary part: " << imaginary << endl;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};