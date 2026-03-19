#include <iostream>
using namespace std;

int main()
{
    int n, digit, originalNum;
    long long reversedNum = 0;
    cin >> n;
    originalNum = n;
    while (n > 0)
    {
        digit = n % 10;
        reversedNum = (reversedNum * 10) + digit;
        n = n / 10;
    }
    if (originalNum == reversedNum)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}