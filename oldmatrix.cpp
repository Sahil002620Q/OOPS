#include <iostream>
using namespace std;

int main () 
{
    
    int matrix1[3][3];
    int matrix2[3][3];

    int m1_row = 1;
    for(int i = 0 ; i < 3 ; i ++ )
    {
        cout <<"enter elements for row " << m1_row << endl ; 
        m1_row++;
        for(int j = 0 ; j < 3 ; j ++ )
        {
            cin >> matrix1[i][j] ;  
        }  
    }

    int m2_row = 1;
    for(int i = 0 ; i < 3 ; i ++ )
    { 
        cout <<"enter elements for row " << m2_row << endl ; 
        m2_row++;
        for(int j = 0 ; j < 3 ; j ++ )
        {
            cin >> matrix2[i][j] ;
        }    
    }

    for(int i = 0 ; i < 3 ; i ++ )
    {
        for(int j = 0 ; j < 3 ; j ++ )
        {
            cout << matrix1[i][j] + matrix2[i][j] << ' ';
        } 
        cout << endl ;
    }    
}