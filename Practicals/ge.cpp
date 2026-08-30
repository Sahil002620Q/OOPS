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
            else //if (num3 >= num1 && num3 >= num2)
            {
                return num3;
            }
        }
       
        // int ge_who(int num1, int num2, int num3)
        // {
        //     int greater = num1;
        //     if (num3 > greater )
        //     {
        //         greater = num3;
        //     }
        //     else if (num2 > greater )
        //     {
        //         greater = num2;
        //     }
        //     else //if (num3 >= num1 && num3 >= num2)
        //     {
        //         return num3;
        //     }
        // }

       
};
int main (){
    size_comparison s;

    float num = s.ge_who(10,100);
    std::cout << num << std::endl ;

    float num2 = s.sm_who(10,100);
    std::cout << num2 ;
}