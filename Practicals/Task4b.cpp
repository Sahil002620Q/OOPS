#include <iostream>
using namespace std;

class temperature
{
    private:
        float fahrenheit;
        float celcius;
    
    public:
        float get_F()
        {
            cout << "Enter temperature in Fahrenheit : " ;
            cin >> fahrenheit ; 
            cout << "\033[1A\033[" << 37 << "C";
            cout << "\xC2\xB0" << "F\n";
            return fahrenheit ;
        }

        float get_C()
        {
            cout << "Enter temperature in celcius : " ;
            cin >> celcius ;
            cout << "\033[1A\033[" << 34 << "C";
            cout << "\xC2\xB0" << "C\n";
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
    temperature t1;

    cout << string(45,'=') << endl ;
    float x = t1.get_F();
    cout << "Temperature in C : " << t1.F_to_C(x) << " \xC2\xB0" << "C" <<endl ;
    cout << string(45,'=') << endl ;
    float y = t1.get_C();
    cout << "Temperature in F : " << t1.C_to_F(y) << " \xC2\xB0" << "F" <<endl ;
    cout << string(45,'=') << endl ;
}