#include "mylib.h"

void owrite(std::string msg)
{
    int len = msg.length();
    std::cout << msg << std::string(len,'\r');
}

void str_len(std::string str)
{
    int len = str.length();
    std::cout << len  << std::endl ;
}

void str_size(std::string str)
{
    int size = str.size();
    std::cout << size << std::endl ;
}

void get_matrix(int matrix1[3][3])
{
    int m1_row = 1;
    for(int i = 0 ; i < 3 ; i ++ )
    {
        std::cout <<"enter elements for row " << m1_row << std::endl ; 
        m1_row++;
        for(int j = 0 ; j < 3 ; j ++ )
        {
            std::cin >> matrix1[i][j] ;  
        } 
    }
    std::cout << std::endl ;
} 

std::string getstr(std::string msg){
    std::string str;
    std::cout << msg ; std::cin >> str ;
    return str;
}

void add_matrix(int matrix_1[3][3],int matrix_2[3][3])
{
    for(int i = 0 ; i < 3 ; i ++ )
    {
        for(int j = 0 ; j < 3 ; j ++ )
        {
            std::cout << matrix_1[i][j] + matrix_2[i][j] << "  ";
        } 
        std::cout << std::endl ;
    }
    std::cout << std::endl ;
}

void sub_matrix(int matrix_1[3][3],int matrix_2[3][3])
{
    for(int i = 0 ; i < 3 ; i ++ )
    {
        for(int j = 0 ; j < 3 ; j ++ )
        {
            std::cout << matrix_1[i][j] - matrix_2[i][j] << "  ";
        } 
        std::cout << std::endl ;
    }
    std::cout << std::endl ;
}

void multi_matrix(int matrix_1[3][3],int matrix_2[3][3])
{
    for(int i = 0 ; i < 3 ; i ++ )
    {
        for(int j = 0 ; j < 3 ; j ++ )
        {
            std::cout << matrix_1[i][j] * matrix_2[i][j] << "  ";
        } 
        std::cout << std::endl ;
    }
    std::cout << std::endl ;
}

void eliminate(int target,std::vector<int>& arr)
{
    for( int i = 0 ; i < arr.size() ; i++) //remove by element 
    {
        if ( arr[i]  == target)
        {   //removal by element
            std::cout << "found " << arr[i] << " at index " << i << std::endl  ;
            arr.erase(arr.begin() + i);
            std::cout << "target " << target << " eliminated sucessfully" << std::endl ;
            break;
        }
    }
}

float ge_who(float num1, float num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else if (num1 < num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}

float ge_who(float num1, float num2, float num3)
{
    if (num1 >= num2 && num1 >= num3 )
    {
        return num1;
    }
    else if (num2 >= num1 && num2 >= num3 )
    {
        return num2;
    }
    else 
    {
        return num3;
    }
}

float sm_who(float num1, float num2)
{
    if (num1 < num2)
    {
        return num1;
    }
    else if (num1 > num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}

float sm_who(float num1, float num2, float num3)
{
    if (num1 <= num2 && num1 <= num3 )
    {
        return num1;
    }
    else if (num2 <= num1 && num2 <= num3 )
    {
        return num2;
    }
    else 
    {
        return num3;
    }
}