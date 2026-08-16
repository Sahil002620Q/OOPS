#include <iostream>
#include "../mylib.h"
using namespace std;

class temperature
{
    private:
        float fahrenheit;
        float celcius;
    
    public:
        float get_c(){
            cout << "Enter temperature in Fahrenheit : " ;
            cin >> fahrenheit ; 
            return fahrenheit ;
        }

        float get_F(){
            cout << "Enter temperature in celcius : " ;
            cin >> celcius ;
            return celcius ;
        }

        float F_to_C(float fahrenheit)
        {
            this->fahrenheit = fahrenheit;
            return (fahrenheit - 32)*5/9;
        }

        float C_to_F(float celcius)
        {
            this->celcius = celcius;
            return (celcius * 9/5) + 32;
        }

};

int main (){

    temperature t1;
    float x = t1.get_F();
    cout << t1.F_to_C(x);

    // float fahrenheit;
    // float celcius;
    // cout << string(20,'=') << endl ;
    // cout << "Enter temperature in Fahrenheit : " ;
    // cin >> fahrenheit ; cout << "\rC" ;

    // celcius = (fahrenheit - 32)*5/9 ;
    // cout << '\n' << "Temperature in C : " << celcius << endl ;
    // cout << string(20,'=') << endl ;
}