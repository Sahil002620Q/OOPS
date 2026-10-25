#include <iostream>
using namespace std;

class payment //we can't make object of this class
{
    virtual void pay() = 0; //pure virtual function .   //herre i used this pure virtual func so this class become abstract 
    public:
    void cd() //can be accessed via inherited class
    {cout << "test"; }
};

class upi: public payment // didn't override pay() this class is also abstract  
{
        //also you can't make obj of this class even if it have other functions
};

class cash: public payment //overrided pay now this class is not abstract but payment will always be abstract
{
    public:
    void pay() override 
    {
        cout << "paid with cash\n";
    }
};

int main()
{
    cash p;
    p.pay();
    p.cd();
}