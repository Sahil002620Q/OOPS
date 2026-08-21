#include <iostream>
#include <vector>
using namespace std;

class classname
{
    private:
        int x1 ;
        int x2;
        int y1;
        int y2;

    public:
        vector<int,int> get_x()
        {
            cout << string(40,'=') << endl ;
            cout << "Enter value of x1 : " ; cin >> x1 ;
            cout << "Enter value of x2 : " ; cin >> x2 ;    
            return {x1 , x2};
        }

        vector<int,int> get_y()
        {
            cout << string(40,'=') << endl ;
            cout << "Enter value of y1 : " ; cin >> y1 ;
            cout << "Enter value of y2 : " ; cin >> y2 ;
            return {y1 , y2};
        }
    };
    
int main ()
{
    classname cl;
    cl.get_x();
    cl.get_y();
}