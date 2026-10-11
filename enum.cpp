#include <iostream>
using namespace std;
enum Signal
{
    RED = 1,
    YELLOW = 2,
    GREEN = 3
};
int main()
{
    int choice;
    cout << "Traffic Signal" << endl;
    cout << "1. Red" << endl;
    cout << "2. Yellow" << endl;
    cout << "3. Green" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    Signal signal = (Signal)choice;
    switch(signal)
    {
        case RED:
            cout << "STOP";
            break;
        case YELLOW:
            cout << "WAIT";
            break;
        case GREEN:
            cout << "GO";
            break;
        default:
            cout << "Invalid choice";
    }
    return 0;
}
