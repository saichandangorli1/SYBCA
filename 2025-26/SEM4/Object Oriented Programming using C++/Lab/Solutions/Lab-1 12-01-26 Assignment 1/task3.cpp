// 3)	Write a CPP program to swap two numbers without using third variable.
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Swapping without using a third variable
    num1 = num1 + num2; // Step 1: Add both numbers
    num2 = num1 - num2; // Step 2: Subtract new num1 by num2 to get original num1
    num1 = num1 - num2; // Step 3: Subtract new num1 by new num2 to get original num2

    cout << "After swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}