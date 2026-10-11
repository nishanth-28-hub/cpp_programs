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
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};
int main()
{
    Student s[3];
    for(int i = 0; i < 3; i++)
    {
        cout << "\nEnter details of student " << i + 1 << endl;
        s[i].input();
    }
    cout << "\nStudent Details\n";
    for(int i = 0; i < 3; i++)
    {
        s[i].display();
    }
    return 0;
}
