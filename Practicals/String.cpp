#include <iostream>
#include <conio.h>
using namespace std;

class Str
{
    private:
        string str;
        
    public:
        void str_len(string str)
        {
            this->str = str;
            int len = str.length();
            cout << len  << endl ;
        }

        void str_size(string str)
        {
            this->str = str;
            int size = str.size();
            cout << size << endl ;
        }

        string str_add(string str1,string str2,bool space=true)
        {
            if(space == true)
            {
                string str = str1 + " " + str2 ;
                return str;
            }    
            else if (space == false)
            {
                string str = str1 + str2 ;
                return str;
            }
            else
            {
                return NULL;
            }
        }

        string str_add(string str1,string str2,string str3,bool space=true)
        {
            if(space == true)
            {
                string str = str1 + " " + str2 + " " + str3;
                return str;
            }    
            else if (space == false)
            {
                string str = str1 + str2 + str3;
                return str;
            }
            else
            {
                return NULL;
            }
        }

        ~Str()
        {
            cout << endl << string(40,'=') << endl ;
        }
};

string getstr(string msg)
{
    string str;
    cout << msg ; cin >> str ;
    return str;
}

int main ()
{
    Str s1;
    cout << string(40,'=') << endl ;
    string str_1 = getstr("Enter first string : ");
    string str_2 = getstr("Enter second string : ");
    // cout << str1  << str2 << endl  ;

    cout << "length of string : " ; s1.str_len(str_1);
    cout << "length of string : " ; s1.str_size(str_2);
    cout << "Concatination of strings : " ; cout << s1.str_add("Python","CPP",1);

    string str1 = "hi";
    string str2 = "sahil";
     
}