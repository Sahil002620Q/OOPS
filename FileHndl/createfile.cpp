#include <iostream>
#include <fstream>
#include <ios>
using namespace std;
int main()
{
    ofstream file("demoname.txt");
    string s = "sahil\nhii how are you";
    file << s ;
    file.close();
    string a = "hii ";
    string b = "\n";
    string c = "wassup";
    cout << a + b + c ;

}