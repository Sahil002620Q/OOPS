#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file("demoname.txt");
    string s;
    while(getline(file,s))
    {
        cout << s << endl ;
    }

}