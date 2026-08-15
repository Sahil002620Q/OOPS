#include <iostream>
using namespace std;

class matrix
{
    public:
        void get_matrix(int matrix1[3][3]){
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
            cout << endl ;
        }   
};

void add_matrix(int matrix_1[3][3],int matrix_2[3][3])
{
    for(int i = 0 ; i < 3 ; i ++ )
    {
        for(int j = 0 ; j < 3 ; j ++ )
        {
            cout << matrix_1[i][j] + matrix_2[i][j] << "  ";
        } 
        cout << endl ;
    }
    cout << endl ;
}

void sub_matrix(int matrix_1[3][3],int matrix_2[3][3])
{
    for(int i = 0 ; i < 3 ; i ++ )
    {
        for(int j = 0 ; j < 3 ; j ++ )
        {
            cout << matrix_1[i][j] - matrix_2[i][j] << "  ";
        } 
        cout << endl ;
    }
    cout << endl ;
}

void multi_matrix(int matrix_1[3][3],int matrix_2[3][3])
{
    for(int i = 0 ; i < 3 ; i ++ )
    {
        for(int j = 0 ; j < 3 ; j ++ )
        {
            cout << matrix_1[i][j] * matrix_2[i][j] << "  ";
        } 
        cout << endl ;
    }
    cout << endl ;
}

int main() 
{
    matrix m1,m2;

    int matrix_1[3][3];
    cout << "Enter elements for first matrix " << endl ;
    m1.get_matrix(matrix_1);

    int matrix_2[3][3];
    cout << "Enter elements for second matrix " << endl ;
    m1.get_matrix(matrix_2);

    cout << "Sum of Matrix 1 and Matrix 2 :\n" ;
    add_matrix(matrix_1,matrix_2);
    cout << "Subtraction of Matrix 2 from Matrix 1 :\n" ;
    sub_matrix(matrix_1,matrix_2);
    cout << "Product of Matrix 1 and Matrix 2 :\n" ;
    multi_matrix(matrix_1,matrix_2);
}