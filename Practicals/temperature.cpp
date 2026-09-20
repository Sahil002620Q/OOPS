#include <iostream>
#include "../.lib/mylib.h" //needfix
using namespace std;

class temperature
{
    private:
        float fahrenheit;
        float celcius;
    
    public:
        float get_C()
        {
            cout << "90\xC2\xB0\nEnter temperature in Fahrenheit : " ;
            cin >> fahrenheit ; 
            return fahrenheit ;
        }

        float get_F()
        {
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

int main ()
{
    cout << "\033[2J\033[1;1H";
    temperature t1;
    // cout << string(45,'=') << endl ;
    // float x = t1.get_F();
    // cout << t1.F_to_C(x);
    // cout << string(45,'=') << endl ;
    
    float fahrenheit;
    float celcius;
    cout << string(45,'=') << endl ;
    cout << "Enter temperature in Fahrenheit : " ;
    cin >> fahrenheit ; 
    cout << "\033[1A";
    cout << "\033[" << 37 << "C";
    cout << "\xC2\xB0" << "F" ;

    celcius = (fahrenheit - 32)*5/9 ;
    cout << '\n' << "Temperature in 90\xC2\xB0 C : " << celcius << endl ;
    cout << string(45,'=') << endl ;
}