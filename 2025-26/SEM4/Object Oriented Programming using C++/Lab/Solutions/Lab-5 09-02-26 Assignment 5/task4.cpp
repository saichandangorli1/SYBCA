#include <iostream>
using namespace std;

int main()
{
    int key;
    int arr[5] = {4, 5, 3, 7, 2};
    cout << "enter key : ";
    cin >> key;
    for (int i = 0; i < 5; i++)
    {
        if (key == arr[i])
        {
            cout << "key found at location : " << i << endl;
            break;
        }
    }

    return 0;
}