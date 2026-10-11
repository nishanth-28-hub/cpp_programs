#include <iostream>
using namespace std;
int main()
{
    int *p;
    p = new int;
    cout << "Enter a number: ";
    cin >> *p;
    cout << "Number = " << *p << endl;
    delete p;
    return 0;
}
