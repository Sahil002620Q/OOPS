#include <iostream>
#define ROW 5
#define COL 5
using namespace std;

class matrix
{
    public:
        void get_matrix(int matrix1[ROW][COL])
        {
            int m1_row = 1;
            for(int i = 0 ; i < ROW ; i ++ )
            {
                cout <<"enter elements for row " << m1_row << endl ; 
                m1_row++;
                for(int j = 0 ; j < COL ; j ++ )
                {
                    cin >> matrix1[i][j] ;  
                } 
            }
            cout << endl ;
        }   
};

void add_matrix(int matrix_1[ROW][COL],int matrix_2[ROW][COL])
{
    for(int i = 0 ; i < ROW ; i ++ )
    {
        for(int j = 0 ; j < COL ; j ++ )
        {
            cout << matrix_1[i][j] + matrix_2[i][j] << "  ";
        } 
        cout << endl ;
    }
    cout << endl ;
}

void sub_matrix(int matrix_1[ROW][COL],int matrix_2[ROW][COL])
{
    for(int i = 0 ; i < ROW ; i ++ )
    {
        for(int j = 0 ; j < COL ; j ++ )
        {
            cout << matrix_1[i][j] - matrix_2[i][j] << "  ";
        } 
        cout << endl ;
    }
    cout << endl ;
}

int main() 
{
    matrix m;

    int matrix_1[ROW][COL];
    cout << "Enter elements for first matrix " << endl ;
    m.get_matrix(matrix_1);

    int matrix_2[ROW][COL];
    cout << "Enter elements for second matrix " << endl ;
    m.get_matrix(matrix_2);

    cout << "Sum of Matrix 1 and Matrix 2 :\n" ;
    add_matrix(matrix_1,matrix_2);
    cout << "Subtraction of Matrix 2 from Matrix 1 :\n" ;
    sub_matrix(matrix_1,matrix_2);
}



