#include <iostream>
using namespace std;
struct Employee
{
    int id;
    string name;
    float salary;
};
int main()
{
    Employee e;
    cout << "Enter employee ID: ";
    cin >> e.id;
    cout << "Enter employee name: ";
    cin >> e.name;
    cout << "Enter salary: ";
    cin >> e.salary;
    cout << "\nEmployee Details" << endl;
    cout << "ID: " << e.id << endl;
    cout << "Name: " << e.name << endl;
    cout << "Salary: " << e.salary << endl;
    return 0;
}
