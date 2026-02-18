#include <iostream>
using namespace std;

int main()
{
    int n, digit, sum = 0;
    cin >> n;
    while (n > 0)
    {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    cout << sum << endl;
    return 0;
}