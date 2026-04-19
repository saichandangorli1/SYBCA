// 2) Write a CPP program to find area of triangle using constructor and
// destructor concept

#include <iostream>
using namespace std;
class Triangle
{
    double base, height;
public:
    Triangle(double b, double h)
    {
        base = b;
        height = h;
    }
    ~Triangle()
    {
        cout << "Triangle object is destroyed" << endl;
    }
    void displayArea()
    {
        double area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};


int main()
{
    double base, height;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    Triangle triangle(base, height);
    triangle.displayArea();
    return 0;
}