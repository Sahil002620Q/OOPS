#include <iostream>
using namespace std ;

class Student{
    private:
        int roll_no;//data member

    public:
        void setroll(int r)  //setter
        {
            if(r > 0)
            {
                roll_no = r;
            }
            else
            {
                cout << "\033[0minvaild interger \n";
                this->roll_no = r;
            }
        }
        
        int getroll() //getter
        {
            return roll_no;
        }

        void display()
        { // member function
            if(roll_no < 0)
            {
                cout << "Roll number must be positive\n";
            }   
            else
            {
                cout << "vaild\n";
                cout << "Roll no is :" << roll_no << endl ;
            }
        }
    
};

int main()
{
    Student s1;
    s1.setroll(2);
    s1.display();
    cout << "roll number of s1 is : " << s1.getroll() << endl ; 
   
    Student s2;
    s2.setroll(-1);
    s2.display();
    cout << "roll number of s1 is : " << s2.getroll() << endl ; 
}