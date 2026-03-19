// Create a class Product with the data members as product no, product Name, quantity and price per unit. Define member functions to Accept and Display product details with total price.

#include <iostream>
#include <string>
using namespace std;

class Product
{
public:
    int prdno;
    string prdname;
    int quantity;
    float price;

    void accept()
    {
        cout << "Enter product number: ";
        cin >> prdno;
        cout << "Enter product name: ";
        cin >> prdname;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter price per unit: ";
        cin >> price;
    }
    void display()
    {
        cout << "Product Number: " << prdno << endl;
        cout << "Product Name: " << prdname << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price per unit: " << price << endl;
        cout << "Total Price: " << quantity * price << endl;
    }
};

int main()
{
    Product p;
    p.accept();
    p.display();
    return 0;
}
