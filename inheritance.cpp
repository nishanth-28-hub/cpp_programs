#include <iostream>
using namespace std;
class Student
{
public:
    int rollno;
    void getRollno()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
    }
};
class Marks : public Student
{
public:
    int marks;
    void getMarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << "\nRoll Number: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    Marks m;
    m.getRollno();
    m.getMarks();
    m.display();
    return 0;
}
