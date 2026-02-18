#include <iostream>
using namespace std;

float calculateArea(float side)
{
    return side * side;
}

float calculateArea(float length, float width)
{
    return length * width;
}

double calculateArea(double radius)
{
    return 3.14159 * radius * radius;
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- Area Calculation Menu ---" << endl;
        cout << "1. Area of Square" << endl;
        cout << "2. Area of Rectangle" << endl;
        cout << "3. Area of Circle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            float s;
            cout << "Enter side: ";
            cin >> s;
            cout << "Area: " << calculateArea(s) << endl;
            break;
        }
        case 2:
        {
            float l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            cout << "Area: " << calculateArea(l, w) << endl;
            break;
        }
        case 3:
        {
            double r;
            cout << "Enter radius: ";
            cin >> r;
            cout << "Area: " << calculateArea(r) << endl;
            break;
        }
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}