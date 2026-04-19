// 4) Create a class Book with data members as Book ID, Title, Author
// and Price. Write member functions to:
// i. Accept book details
// ii. Display book information
// iii. Apply a discount of 10% on the book price and show the
// final price

#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
    int bookID;
    string title;
    string author;
    float price;

    void accept()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Author: ";
        cin >> author;
        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }

    void applyDiscount()
    {

        price = price - (price * 0.10);
        cout << "Final Price after 10%' discount: " << price << endl;
    }
};
int main()
{
    Book b;
    b.accept();
    b.display();
    b.applyDiscount();
    return 0;
}