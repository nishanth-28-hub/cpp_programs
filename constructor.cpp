#include <iostream>
using namespace std;
class Student
{
public:
    int rollno;
    Student()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
    }
    void display()
    {
        cout << "Roll Number: " << rollno << endl;
    }
};
int main()
{
    Student s;
    s.display();
    return 0;
}
