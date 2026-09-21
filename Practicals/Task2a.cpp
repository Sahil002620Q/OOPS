#include <iostream>
#include <vector>
using namespace std;

class Class
{
    private:
        string name;
        int rollno;
        float marks;
        vector<Class> studentList; 

    public:
        void display();
        void display(int no_student);
        void setdata();
        void setdata(int size);
};

void Class::display()
{
    cout << "Name : " << name;
    cout << "\nRoll number : " << rollno;
    cout << "\nMarks : " << marks << endl;
}

void Class::display(int no_student)
{
    for(int i = 0; i < no_student; i++)
    {
        studentList[i].display();
        cout << string(40, '=') << endl;
    } 
}

void Class::setdata(){}

void Class::setdata(int size)
{
    studentList.resize(size);   
    for (int i = 0; i < size; i++)
    { 
        cout << "\n--- Student " << i+1 << " ---" << endl ;
        cout << "Enter name : " ; cin >> studentList[i].name ;
        cout << "Enter roll number : " ; cin >> studentList[i].rollno ;
        cout << "Enter marks : " ; cin >> studentList[i].marks ;
        cout << endl;
    }
}

void menu()
{
    cout << "1. Create class & Enter Data " << endl ;
    cout << "2. Display Data " << endl ;
    cout << "3. Exit " << endl ;
}

int getChoice()
{
    int choice;
    cout << "Enter your choice : " ; cin >> choice ;
    return choice ;
}

int main()
{
    int size = 0;
    Class AIML_C;
    string classname;

    while(true)
    {
        system("cls");
        menu();
        int choice = getChoice();
        
        if(choice == 1)
        {
            cout << "Enter class name : " ; cin >> classname;
            cout << "Enter class size : " ; cin >> size;
            
            AIML_C.setdata(size); 
            
            cout << "Enter to continue : " ; 
            cin.ignore(1000, '\n'); 
            cin.get();
        }
        else if(choice == 2)
        {
            if(size == 0)
            {
                cout << "\033[91mError: Class is empty\033[0m\n" ;
            }
            else
            {
                cout << "\n--- Students of " << classname << " ---" << endl;
                AIML_C.display(size);
            } 
            
            cout << "\033[93mEnter to continue : \033[0m"; 
            cin.ignore(1000, '\n'); 
            cin.get();
        }
        else if(choice == 3)
        {
            cout << "\033[92mThanks for using programme!\033[0m\n";
            exit(0);
        }
        else 
        {
            cout << "\n\033[91mInvalid choice !\033[0m\n";
            cout << "Enter to continue : "; 
            cin.ignore(1000, '\n'); 
            cin.get();
        }
    }
    return 0;
}