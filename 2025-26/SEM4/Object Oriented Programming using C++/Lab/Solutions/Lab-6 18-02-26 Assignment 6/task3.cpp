// 3) Create a class Rectangle with data members Length and Breadth.
// Define member functions to:
// i. Accept dimensions
// ii. Calculate area
// iii. Calculate perimeter

#include <iostream>
using namespace std;

class Rectangle
{
public:
    float l;
    float b;
    float area;
    float perimeter;

    void accept()
    {
        cout << "Enter Length: ";
        cin >> l;
        cout << "Enter Breadth: ";
        cin >> b;
    }

    void calculateArea()
    {
        area = l * b;
    }

    void calculatePerimeter()
    {
        perimeter = 2 * (l + b);
    }

    void display()
    {
        cout << "Length: " << l << endl;
        cout << "Breadth: " << b << endl;
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
    }
};

int main()
{
    Rectangle r;
    r.accept();
    r.calculateArea();
    r.calculatePerimeter();
    r.display();
    return 0;
}