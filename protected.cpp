#include <iostream>
using namespace std;
class Student
{
protected:
    int rollno;
public:
    void input()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
    }
};
class Marks : public Student
{
public:
    int marks;
    void inputMarks()
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
    m.input();
    m.inputMarks();
    m.display();
    return 0;
}
