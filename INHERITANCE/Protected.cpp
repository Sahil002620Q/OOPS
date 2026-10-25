#include <iostream>
using namespace std;

class parent
{
    protected:
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
    // cout << c.k ; error with protected : public
}
