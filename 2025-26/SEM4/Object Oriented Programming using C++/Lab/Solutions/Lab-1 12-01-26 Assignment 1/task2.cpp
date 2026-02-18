// 2)	Write a CPP program to swap two numbers using third variable.
#include <iostream>
using namespace std;
int main() {
    int num1, num2, temp;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Swapping using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}