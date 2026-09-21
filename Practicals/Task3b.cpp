#include <iostream>
#include <conio.h>
using namespace std;

class Solution
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

        ~Solution()
        {
            cout << string(50,'=') << endl ;
        }

        Solution()
        {
            cout << endl << string(50,'=') << endl ;
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
    Solution s1;
    string str_1 = getstr("Enter first string : ");
    string str_2 = getstr("Enter second string : ");

    cout << "length of string : " ; s1.str_len(str_1);
    cout << "length of string : " ; s1.str_size(str_2);
    cout << "Concatination of strings : " ; cout << s1.str_add(str_1,str_2,0);  
}