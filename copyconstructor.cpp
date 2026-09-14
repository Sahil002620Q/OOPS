#include <iostream>
using namespace std;

class myclass
{
    private:
        string head;
        float salary;

    public:
        myclass(string H,float S)
        {
            head = H;
            salary = S;
        }

        myclass( myclass &obj)
        {
            head = obj.head;
            salary = obj.salary;
        }

        void display()
        {
            cout << "Head : " << head << endl ;
            cout << "Salary : " << salary << endl ;
        }
};

int main()
{
    myclass aiml("sahil",999);
    aiml.display();
    // myclass core(aiml);
    myclass core = aiml;
    core.display();

}