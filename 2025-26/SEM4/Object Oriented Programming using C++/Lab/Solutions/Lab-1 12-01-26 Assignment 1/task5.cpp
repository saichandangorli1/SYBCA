// 5)	Write a CPP program to convert temperature in Celsius to Fahrenheit.
#include <iostream>
using namespace std;
int main()
{
    float celsius, fahrenheit;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}