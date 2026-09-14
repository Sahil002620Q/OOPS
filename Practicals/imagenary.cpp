#include <iostream>
using namespace std;

class complexi
{
    private:
        int real;
        int imagi;

    public:

        // default complexi(){}

        complexi(int real,int imagi)
        {
            this->real =  real;
            this->imagi = imagi;
        }

        complexi operator+(const complexi &obj)
        {
            complexi temp(0,0);
            temp.real = real + obj.real;
            temp.imagi = imagi + obj.imagi;
            return temp;
        }

        void display()
        {
            cout << "Real part : " << real << endl ;
            cout << "Imaginary part : " << imagi << endl ;
            cout << "Eqn : " << real << " + " << imagi << "i\n" ;
        }

};

int main (){
    complexi img(2,4);
    complexi img2(1,3);

    complexi img3 = img + img2;
    img.display();
    cout << string(20,'=') << endl ;
    img2.display();
    cout << string(20,'=') << endl ;
    img3.display();
    cout << string(20,'=') << endl ;

}