#include <iostream>
using namespace std;
struct Book
{
    int id;
    string title;
    float price;
};
int main()
{
    Book b;
    cout << "Enter book ID: ";
    cin >> b.id;
    cout << "Enter book title: ";
    cin >> b.title;
    cout << "Enter book price: ";
    cin >> b.price;
    cout << "\nBook Details" << endl;
    cout << "Book ID: " << b.id << endl;
    cout << "Title: " << b.title << endl;
    cout << "Price: " << b.price << endl;
    return 0;
}
