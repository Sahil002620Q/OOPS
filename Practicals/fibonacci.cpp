#include <iostream>
using namespace std;

class fibo 
{
    private:
        int n;

    public:
        int getter()
        {
            int n;
            cout << "Enter value of n to find 1 to n Fibonacci series : ";
            cin >> n ;
            return n ;
        }

        fibo()
        {
            n = getter();
            int prev1 = 0;
            int prev2 = 1;    
            cout << "fibonacci series form 1 to " << n << endl  ;       
            
            if(n == 0)
            {
                cout << 0 ;
                return;
            }
            else if(n == 1)
            {
                cout << 0 << ' ' << 1 << ' ' ;
                return;
            }

            cout << 0 << endl << 1 << endl ;
            for(int i = 0; i < n - 2  ; i++)
            {
                int fabo = prev1 + prev2;
                cout << fabo << ' ' ;
                prev1 = prev2;
                prev2 = fabo;
            }
        }
};

int main()
{
    fibo fabo_1_to_20;
}