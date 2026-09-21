#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
using namespace std;

class min_distance
{
    private:
        int x1;
        int x2;
        int y1;
        int y2;

    public:
        min_distance() = default; 

        min_distance(int x1,int x2,int y1,int y2)  
        {    
            this->x2 = x2 ;
            this->y1 = y1 ;
            this->y2 = y2 ;
            this->x1 = x1 ;

            float X = (x2 - x1) * (x2 - x1) ;
            float Y = (y2 - y1) * (y2 - y1) ;
            float D =  X + Y ;
            cout << "Shortest distance between point (x1,y1) and (x2,y2) ie ("  << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is : " << sqrt(D) << endl ;
        }

        int get_x1()
        {
            cout << "Enter value of point x1 : " ; cin >> x1 ;       
            return x1 ;
        }
        
        int get_y1()
        {
            cout << "Enter value of point y1 : " ; cin >> y1 ;
            return y1 ;
        }

        int get_x2()
        {
            cout << "Enter value of point x2 : " ; cin >> x2 ;  
            return x2 ;
        }

        int get_y2()
        {
            cout << "Enter value of point y2 : " ; cin >> y2 ;
            return y2 ;
        }

        float shord(bool msg=true)
        {
            float x1 = get_x1() ;
            float y1 = get_y1() ;
            float x2 = get_x2() ;
            float y2 = get_y2() ;

            float X = (x2 - x1) * (x2 - x1) ;
            float Y = (y2 - y1) * (y2 - y1) ;
            float DI =  X + Y ;
            if(msg == true)
            {
                cout << "Shortest distance between point (x1,y1) and (x2,y2) ie ("  << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is : " << sqrt(DI) << endl ;
            }
            return sqrt(DI);
        }

};
    
int main ()
{
    system("cls");
    cout << string(84,'=') << endl ;
    min_distance s1(3,5,4,7);

    min_distance s2;
    cout << string(84,'=') << endl ;
    float distance = s2.shord();
    cout << string(84,'=') << endl ;

}