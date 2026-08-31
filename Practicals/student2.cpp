#include <iostream>
#include <vector>
using namespace std;
class Class
{
    private:
        string name;
        int rollno;
        float marks;
        vector<int> class_students;

        int no_student;
        string class_name;

    public:
        void display();
        void setdata();
        void display(int no_student,vector<Class>& obj);
        void Class::stats();

        // void display(int no_student);
        // void display(vector<int> data);
        void setdata(int no_student);
        void avg(vector<Class>& obj)
        {
            int sum = 0;
            for(int i ; i < 20 ; i++)
            {
                sum += obj[i].marks;
                float avg = sum/20; 
                cout << avg;
            }
        }
        
        
};

void Class::display()
{
    cout << "Name : " << name ;
    cout << "\nRoll number : " << rollno ;
    cout << "\nMarks : " << marks << endl ;
}

void Class::setdata()
{
    cout << "Enter name : " ; cin >> name ;
    cout << "Enter roll number : " ; cin >> rollno ;
    cout << "Enter marks : " ; cin >> marks ;
}

void menu()
{
    // cout << "1. Create class " << endl ;
    // cout << "1. Enter Students data " << endl ;
    // cout << "1. Display Students Data " << endl ;
    // cout << "1. Delete data " << endl ;
cout << "\n";
cout << "========================================\n";
cout << "          AIML STUDENT SYSTEM\n";
cout << "========================================\n";
cout << "[1] Add Student\n";
cout << "[2] Add Multiple Students\n";
cout << "[3] Display All Students\n";
cout << "[4] Search Student\n";
cout << "[5] Update Student\n";
cout << "[6] Delete Student\n";
cout << "[7] Show Class Statistics\n";
cout << "[8] Show Topper\n";
cout << "[9] Clear All Student Data\n";
cout << "[q] Exit\n";
cout << "========================================\n";


}

int getChoice()
{
    int choice;
    cout << "Enter your choice : " ; cin >> choice;
    return choice;
}

void setdata(int no_student,vector<Class>& obj)
{
    
    for(int i = 0; i < no_student; i++)
    {
        obj[i].setdata();
    }           
    
}    

void display(int no_student, vector<Class>& obj)
{
    cout << "\n";
    cout << "========================================\n";
    cout << "          ALL STUDENTS\n";
    cout << "========================================\n";

    cout << "Total Students : " << no_student << "\n";
    cout << "----------------------------------------\n";

    for(int i = 0; i < no_student; i++)
    {
        cout << "\n";
        cout << "-------------- Student " << i + 1 << " ----------------\n";

        // for(int i = 0; i < no_student; i++)
        // {
            obj[i].display();
        // } 

        cout << "----------------------------------------\n";
    }

    cout << "\n========================================\n";
    cout << "        END OF STUDENT LIST\n";
    cout << "========================================\n";
}

void delmenu()
{
    cout << "========================================\n" ;
    cout << "        CLEAR ALL DATA\n" ;
    cout << "========================================\n" ;
    cout << "\n" ;
    cout << "WARNING!\n" ;
    cout << "This will delete ALL student records.\n" ;
    cout << "\n" ;
    cout << "Total Records: 20\n" ;
    cout << "\n" ;
    cout << "Are you sure?\n" ;
    cout << "\n" ;
    cout << "[1] Yes, Delete Everything\n" ;
    cout << "[2] No, Go Back\n" ;
    cout << "\n" ;
    // cout << "Enter choice :\n" ;

}

void exitmsg()
{
cout << "========================================\n" ;
cout << "       THANK YOU FOR USING AIML\n" ;
cout << "          STUDENT SYSTEM\n" ;
cout << "========================================\n" ;
cout << "\n" ;
cout << "Exiting program...\n\n\n\n\n\n\n\n\n\n\n" ;
}
    
void Class::stats()
{
cout << "========================================\n" ;
cout << "          CLASS STATISTICS\n" ;
cout << "========================================\n" ;
cout << "\n" ;
cout << "Total Students     : 20\n" ;
cout << "Average Marks      : " ; cout << Class::avg(aiml); << "\n" ;
cout << "Highest Marks      : 96\n" ;
cout << "Lowest Marks       : 42\n" ;
cout << "Average Attendance : 84.6%\n" ;
cout << "\n" ;
cout << "----------------------------------------\n" ;
cout << "Passed Students    : 17\n" ;
cout << "Failed Students    : 3\n" ;
cout << "----------------------------------------\n" ;
cout << "\n" ;
cout << "[1] View Statistics Again\n" ;
cout << "[2] Back\n" ;
cout << "\n" ;
cout << "Enter choice :\n" ;
}
int main()
{
   vector<Class> aiml(20);

   while(true)
   {
 
        system("cls");
        menu();
        int choice = getChoice();

        string classname;
        int no_studs;
        if(choice == 1)
            {
                system("cls");
                cout << "Enter class name : " ; cin >> classname;
            }
            else if(choice == 2)
            {
                
                system("cls");
                cout << "How many students are there in your class : " ;  cin >> no_studs;
                setdata(no_studs,aiml);
            }
            else if(choice == 3)
            {
                system("cls");
                display(no_studs,aiml);
                system("sleep 3");
                getchar();
                
            }
            else if(choice == 4)//
            {
                system("cls");
                display(no_studs,aiml);
            }
            else if(choice == 5)//
            {
                system("cls");
                display(no_studs,aiml);
            }
            else if(choice == 6) //
            {
                system("cls");
                display(no_studs,aiml);
            }
            else if(choice == 7)
            {
                system("cls");
                delmenu();
                choice = getChoice();
                if(choice == 1)
                {
                    aiml.clear();
                    system("cls");
                    cout << "========================================\n" ;
                    cout << "All student data has been cleared!\n" ;
                    cout << "========================================\n" ;
                    system("sleep 3");           
                }
                else{

                }
            }
            else if (choice == 'q')
            {
                exitmsg();
                break;
            }
            else{
                system("cls");
                exitmsg();
                break;
            }

   }
}