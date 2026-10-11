#include <iostream>
using namespace std;
union Student
{
    int rollno;
    float marks;
    char grade;
};
int main()
{
    Student s;
    cout << "Enter roll number: ";
    cin >> s.rollno;
    cout << "Roll Number = " << s.rollno << endl;
    cout << "Enter marks: ";
    cin >> s.marks;
    cout << "Marks = " << s.marks << endl;
    cout << "Enter grade: ";
    cin >> s.grade;
    cout << "Grade = " << s.grade << endl;
    return 0;
}
