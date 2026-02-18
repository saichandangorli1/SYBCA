#include <iostream>
#include <cmath>
using namespace std;

double calculate(double base, double exp)
{
    return pow(base, exp);
}

int calculate(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

float calculate(float a, float b)
{
    return a * b;
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- Overloaded Math Menu ---" << endl;
        cout << "1. a raised to b" << endl;
        cout << "2. Summation of first n integers" << endl;
        cout << "3. Multiplication of two numbers" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            double a, b;
            cout << "Enter base (a) and exponent (b): ";
            cin >> a >> b;
            cout << "Result: " << calculate(a, b) << endl;
            break;
        }
        case 2:
        {
            int n;
            cout << "Enter n: ";
            cin >> n;
            cout << "Summation: " << calculate(n) << endl;
            break;
        }
        case 3:
        {
            float x, y;
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << "Product: " << calculate(x, y) << endl;
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