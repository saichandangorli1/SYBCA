#include <iostream>
using namespace std;

void checkOddEven(int n)
{
    if (n % 2 == 0)
        cout << n << " is Even." << endl;
    else
        cout << n << " is Odd." << endl;
}

void checkDivisibility(int n)
{
    if (n % 3 == 0 && n % 5 == 0)
        cout << n << " is divisible by both 3 and 5." << endl;
    else
        cout << n << " is not divisible by both 3 and 5." << endl;
}

void checkPositiveNegative(int n)
{
    if (n > 0)
        cout << n << " is Positive." << endl;
    else if (n < 0)
        cout << n << " is Negative." << endl;
    else
        cout << "The number is Zero." << endl;
}

int main()
{
    int choice, num;

    do
    {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Check Odd or Even" << endl;
        cout << "2. Check Divisibility by 3 and 5" << endl;
        cout << "3. Check Positive or Negative" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3)
        {
            cout << "Enter a number: ";
            cin >> num;
        }

        switch (choice)
        {
        case 1:
            checkOddEven(num);
            break;
        case 2:
            checkDivisibility(num);
            break;
        case 3:
            checkPositiveNegative(num);
            break;
        case 4:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}