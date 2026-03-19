#include <iostream>
using namespace std;

inline float getPerimeter(float radius)
{
    return 2 * 3.14159 * radius;
}

int main()
{
    float r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    cout << "Perimeter of the circle: " << getPerimeter(r) << endl;

    return 0;
}