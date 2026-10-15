#include <iostream>
using namespace std;

class parent
{
    public:
    int x = 10;
};

// class child: private parent
// class child: protected parent
class child: public parent
{
    private:
    int k = 100;
    public:
    // int x = 100; overwrite
    void show_x()
    {
        cout << " value of parent's x is : " << x ;
    }
};

int main()
{
    child c;
    c.show_x();
    // cout << c.k ;
}


// parent private : private, protected, public all invailed ie private cannot be accessed via any method
// parent public : protected , only method allowd but no direct access , same for private
