#include <iostream>
using namespace std;
class Number
{
public:
    int x;
    void input()
    {
        cout << "Enter a number: ";
        cin >> x;
    }
    void change(Number n)
    {
        n.x = n.x + 10;
        cout << "Value inside function: " << n.x << endl;
    }
    void display()
    {
        cout << "Original value: " << x << endl;
    }
};
int main()
{
    Number n;
    n.input();
    n.change(n);
    n.display();
    return 0;
}
