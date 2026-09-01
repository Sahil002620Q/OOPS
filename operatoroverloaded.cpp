#include <iostream>
using namespace std;

class recti
{
    private:
    int length;
    int breadth;

    public:
    recti(int l,int b)
    {
        length = l;
        breadth = b;
    }
    recti operator+(recti obj)
    {
        recti temp(0,0);
        temp.length = length + obj.length;
        temp.breadth = breadth + obj.breadth;
        return temp;
    }
    void display()
    {
        cout << "length : " << length << endl << "breadth : " << breadth << endl ; 
    }

};

int main () 
{
    recti r1(1,2);
    recti r2(2,4);

    recti r3 = r1 + r2;
    r3.display();
    
}