#include <iostream>
using namespace std;

class root 
{
    public:
        int mySqrt(int x) 
        {
            long long root = 0;
            while((root+1)*(root+1) <= x)
            {
                root++;
            }
            return root;
        }
};

int main () {
    root s;
    int input ;
    cout << "Enter a number to get root value : " ; 
    cin >> input ;
    int root = s.mySqrt(input);
    cout << "Nearest rounded square root of " << input << " is " << root ;
}