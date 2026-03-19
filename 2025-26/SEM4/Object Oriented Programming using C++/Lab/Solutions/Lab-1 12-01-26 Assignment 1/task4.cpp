// 4)	Write a CPP program to find area and perimeter of circle using constant concept.
#include <iostream>
using namespace std;
int main() {
    const double PI = 3.14159; // Constant for Pi
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = PI * radius * radius; // Area = πr²
    double perimeter = 2 * PI * radius; // Perimeter = 2πr

    cout << "Area of the circle: " << area << endl;
    cout << "Perimeter of the circle: " << perimeter << endl;

    return 0;
}