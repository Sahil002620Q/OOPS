#include <iostream>
using namespace std;

class shared
{
    public:
    static int count;
    inline static int count = 0; //exceptional
    shared()
    {
        count++;
    }

};

int shared::count = 0;

int main()
{
    shared c1;
    shared c2;
    shared c3;

    cout << shared::count;

}