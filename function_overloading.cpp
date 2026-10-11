#include <iostream>
using namespace std;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    Calculator c;
    int a, b, x;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum of two numbers = " << c.add(a, b) << endl;
    cout << "Enter a third number: ";
    cin >> x;
    cout << "Sum of three numbers = " << c.add(a, b, x) << endl;
    return 0;
}
