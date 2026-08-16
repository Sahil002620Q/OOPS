#include <iostream>
#define ROW 2
#define COL 2
using namespace std;

void get_matrix(int matrix1[ROW][COL])
{
    int m1_row = 1;
    for(int i = 0 ; i < ROW ; i ++ )
    {
        cout <<"enter elements for row " << m1_row << std::endl ; 
        m1_row++;
        for(int j = 0 ; j < COL ; j ++ )
        {
            cin >> matrix1[i][j] ;  
        } 
    }
    std::cout << std::endl ;
} 

void add_matrix(int matrix_1[ROW][COL],int matrix_2[ROW][COL])
{
    for(int i = 0 ; i < ROW ; i ++ )
    {
        for(int j = 0 ; j < COL ; j ++ )
        {
            std::cout << matrix_1[i][j] + matrix_2[i][j] << "  ";
        } 
        std::cout << std::endl ;
    }
    std::cout << std::endl ;
}

int main()
{
    int matrix1[ROW][COL]; 
    int matrix2[ROW][COL]; 
    get_matrix(matrix1);
    get_matrix(matrix2);
    add_matrix(matrix1,matrix2);
}