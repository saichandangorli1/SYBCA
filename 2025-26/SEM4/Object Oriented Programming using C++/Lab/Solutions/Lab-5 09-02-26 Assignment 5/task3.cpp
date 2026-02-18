#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {4, 5, 3, 7, 2};
    int min,max;
    min  = max = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    return 0;
}