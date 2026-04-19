// ) Write a CPP program to find sum of n numbers using dynamic
// constructor concept.

#include <iostream>
using namespace std;
class Sum
{
    int n;
    int* numbers;
public:
    Sum(int size)
    {
        n = size;
        numbers = new int[n];
    }
    ~Sum()
    {
        delete[] numbers;
    }
    void inputNumbers()
    {
        cout << "Enter " << n << " numbers: ";
        for(int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }
    }
    int calculateSum()
    {
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += numbers[i];
        }
        return sum;
    }
};


int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    Sum sumObj(size);
    sumObj.inputNumbers();
    int result = sumObj.calculateSum();
    cout << "Sum of the numbers: " << result << endl;
    return 0;
}