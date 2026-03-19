#include <iostream>
using namespace std;

int maximum(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int result = maximum(num1, num2, num3);

    cout << "The largest number is: " << result << endl;

    return 0;
}