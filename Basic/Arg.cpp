#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) : length(l) {}

    bool isLarger(Box &obj)
    {
        if(obj.length > length)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

int main ()
{
    Box b1(2),b2(3);
    cout << "b1 is larger ? : " << ( b1.isLarger(b2)  ? "False" : "True");
}