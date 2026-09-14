#include <iostream>
using namespace std;

class classname
{
    private:
    int marks;
    string name;
    public:
    void setData(string name, int marks);
    void display();
};

void classname::setData(string name, int marks)
{
    this->name = name;
    this->marks = marks;
}

void classname::display()
{
    cout << "Name : " << name << endl ;
    cout << "Marks : " << marks << endl ;
}

int main (){
    classname myclass;
    myclass.setData("sahil",100);
    myclass.display();
}