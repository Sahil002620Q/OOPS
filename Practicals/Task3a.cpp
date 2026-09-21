#include <iostream>
using namespace std;
int main()
{
    int val = 777;
    cout << "Value of x : " << val << endl ;
    cout << "Address of x : " << &val << endl << endl  ;   
 
    int* ptr = &val;
    cout << "Value of ptr : " << ptr << endl ;   
    cout << "Address of ptr : " << &ptr << endl ;  
    cout << "Value stored where ptr is pointing : " << *ptr << endl << endl  ;  
 
    int** pptr = &ptr;
    cout << "Value of pptr : " << pptr << endl ;   
    cout << "Address of pptr : " << &pptr << endl ;  
    cout << "Value stored where pptr is pointing : " << **pptr << endl ; 
}