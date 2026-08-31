#include <iostream>
#include <vector>
using namespace std;
class Class
{
    private:
        string name;
        int rollno;
        float marks;
        int no_student;
        string class_name;

    public:
        void display();
        void display(int no_student);
        void display(vector<int> data);
        void setdata();
        void setdata(int no_student);
        vector<Class> setdata(int no_student,string class_name)
        {
           vector<Class> students_of_class(no_student);
           
            for(int i = 0; i < no_student; i++)
            {
                students_of_class[i].setdata();
            }
                    
            return students_of_class;
        }
        
};

void Class::display()
{
    cout << "Name : " << name ;
    cout << "\nRoll number : " << rollno ;
    cout << "\nMarks : " << marks << endl ;
}

void Class::display(int no_student)
{
    Class s[no_student];

    for(int i = 0; i < no_student; i++)
    {
        s[i].display();
        cout << string(40,'=') << endl ;
    } 
    
}

void Class::display(vector<int> data)
{
    cout << data[1] ;

    // for(int i = 0; i < no_student; i++)
    // {
    //     cout << "Name : " << data[i] ;
    //     cout << "\nRoll number : " << rollno ;
    //     cout << "\nMarks : " << marks << endl ;
    // } 
    
}

void Class::setdata()
{
    cout << "Enter name : " ; cin >> name ;
    cout << "Enter roll number : " ; cin >> rollno ;
    cout << "Enter marks : " ; cin >> marks ;
}

void menu()
{
    cout << "1. Create class " << endl ;
    cout << "1. Enter Data " << endl ;
    cout << "1. Display Data " << endl ;
    cout << "1. Delete data " << endl ;
}

int getChoice()
{
    int choice;
    cout << "Enter your choice : " ; cin >> choice;
    return choice;
}


int main()
{
    Class AIML_C;

    vector<int> idk = AIML_C.setdata(3,"aiml");
    // AIML_C.display(3);

    menu();
    int choice = getChoice();

    string classname;
    if(choice == 1)
    {
        
        cout << "Enter class name : " ; cin >> classname;
    }
    else if(choice == 1)
    {
        cout << "How many students are there in your class : " ;
        // Class classname[20]
    }
    else if(choice == 1)
    {
        //code
    }
    else if(choice == 1)
    {
        //code
    }
    
}