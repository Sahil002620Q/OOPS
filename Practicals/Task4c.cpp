#include <iostream>
class size_comparison
{
    public:
        inline float ge_who(float num1, float num2)
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

        inline float ge_who(float num1, float num2, float num3)
        {
            if (num1 >= num2 && num1 >= num3 )
            {
                return num1;
            }
            else if (num2 >= num1 && num2 >= num3 )
            {
                return num2;
            }
            else //if (num3 >= num1 && num3 >= num2)
            {
                return num3;
            }
        }
        
        inline float sm_who(float num1, float num2)
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

        inline float sm_who(float num1, float num2, float num3)
        {
            if (num1 <= num2 && num1 <= num3 )
            {
                return num1;
            }
            else if (num2 <= num1 && num2 <= num3 )
            {
                return num2;
            }
            else //if (num3 >= num1 && num3 >= num2)
            {
                return num3;
            }
        }    
};

int main ()
{
    size_comparison s;

    float num = s.ge_who(7.7,7);
    std::cout << "Maximum value: "  << num << std::endl ;
   
    float num2 = s.ge_who(77,7,7.7);
    std::cout << "Maximum value: " << num2 << std::endl ;

    float num3 = s.sm_who(1,0);
    std::cout << "Minimum value: " <<  num3 << std::endl ;
    
    float num4 = s.sm_who(1,0,-1);
    std::cout << "Minimum value: " << num4 << std::endl ;
}