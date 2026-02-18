// Write a CPP program to accept ‘n’ array elements and display it.

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    int n;
    cout << "enter the value of n :";
    cin >> n;
    int *arr = new int[n];
    cout << "enter array elemnts :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
