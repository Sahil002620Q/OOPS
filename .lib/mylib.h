#pragma once
#include <iostream>
#include <vector>
#ifndef tag
#define tag
std::string getstr(std::string msg);
void owrite(std::string msg);
void str_len(std::string str);
void str_size(std::string str);
void get_matrix(int matrix1[3][3]);
void add_matrix(int matrix_1[3][3],int matrix_2[3][3]);
void sub_matrix(int matrix_1[3][3],int matrix_2[3][3]);
void multi_matrix(int matrix_1[3][3],int matrix_2[3][3]);
void eliminate(int target,std::vector<int>& arr);
float ge_who(float num1, float num2);
float ge_who(float num1, float num2, float num3);
float sm_who(float num1, float num2);
float sm_who(float num1, float num2, float num3);
#endif