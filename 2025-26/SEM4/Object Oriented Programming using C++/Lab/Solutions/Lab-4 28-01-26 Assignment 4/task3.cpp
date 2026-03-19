#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double num, base, exp;

    do
    {
        cout << "\n--- Math Operations Menu ---" << endl;
        cout << "1. Find Square Root" << endl;
        cout << "2. Find Ceil Value" << endl;
        cout << "3. Find Rounded Value" << endl;
        cout << "4. Evaluate a^b" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter a number: ";
            cin >> num;
            cout << "Square root: " << sqrt(num) << endl;
            break;
        case 2:
            cout << "Enter a decimal number: ";
            cin >> num;
            cout << "Ceil value: " << ceil(num) << endl;
            break;
        case 3:
            cout << "Enter a decimal number: ";
            cin >> num;
            cout << "Rounded value: " << round(num) << endl;
            break;
        case 4:
            cout << "Enter base (a): ";
            cin >> base;
            cout << "Enter exponent (b): ";
            cin >> exp;
            cout << "Result (a^b): " << pow(base, exp) << endl;
            break;
        case 5:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}