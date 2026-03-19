// Create a class Number with pointer as a data member.Define member functions to accept ‘n’ numbers and display number of even and odd numbers from it using dynamic memory allocation.

#include <iostream>
using namespace std;
class Number
{
public:
    int *arr;
    int size;

    void accept()
    {
        cout << "Enter the number of elements: ";
        cin >> size;
        arr = new int[size];
        cout << "Enter " << size << " numbers: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    void display()
    {
        int even = 0;
        int odd = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        cout << "Number of even numbers: " << even << endl;
        cout << "Number of odd numbers: " << odd << endl;
    }
};

int main()
{
    Number num;
    num.accept();
    num.display();
    return 0;
}