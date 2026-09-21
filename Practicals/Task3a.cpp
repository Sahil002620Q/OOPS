#include <iostream>
using namespace std;
int main()
{
    int x = 22;
    cout << "Value of x : " << x << endl ;
    cout << "Address of x : " << &x << endl << endl  ;   // & means address of
 


    int* ptr; //this is a special data type which stores address
    ptr = &x;

    // now ptr have two address one of itself and one it holds anothers
    cout << "Value of ptr : " << ptr << endl ;   //stores address same like other store element
    cout << "Address of ptr : " << &ptr << endl ;  //ptr have its own address
    cout << "Address of ptr : " << *ptr << endl ;  //print value that stored address have

    //change var using reff
    *ptr = 44;
    cout << "AVa;ue of ptr : " << *ptr << endl ;  
    // cout << "Address of x : " << &x << endl ;   // & means address of

    // int* var vs *var are different
}