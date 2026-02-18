#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int prd = 1;
    int arr[5] = {4, 5, 3, 7, 2};
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
        prd *= arr[i];
    }

    cout << "sum : " << sum << endl;
    cout << "Product : " << prd << endl;

    return 0;
}