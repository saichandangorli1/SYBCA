#include <iostream>
using namespace std;

void checkPrime(int n)
{
    int count = 1;

    if (n <= 1)
    {
        count = 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }
    }

    if (count == 1)
    {
        cout << n << " is a Prime Number." << endl;
    }
    else
    {
        cout << n << " is not a Prime Number." << endl;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    checkPrime(num);

    return 0;
}