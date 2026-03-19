// write a menu driven program using functionm overloading concept
// area of circle,rectangle, square

#include <iostream>
using namespace std;

const float PI = 3.1415;

float area(float radius)
{
    float areac = PI * radius * radius;
    return areac;
}
int area(int l, int b)
{
    int arear = l * b;
    return arear;
}
int area(int s)
{
    int areas = s * s;
    return areas;
}

int main()
{
    float areac = area(2);
    cout << areac << endl;
    int arear = area(2, 5);
    cout << arear << endl;
    int areas = area(2);
    cout << areas;
    return 0;
}