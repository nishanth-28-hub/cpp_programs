#include <iostream>
using namespace std;
class Student
{
public:
    int rollno;
    string name;
    void input()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
    }
    void display()
    {
        cout << "\nRoll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};
int main()
{
    Student s;
    Student *ptr;
    ptr = &s;
    ptr->input();
    ptr->display();
    return 0;
}
