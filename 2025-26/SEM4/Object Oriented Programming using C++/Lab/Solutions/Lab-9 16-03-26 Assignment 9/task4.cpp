// Write a CPP program to search a number in array of ‘n’ numbers using dynamic constructor concept.

#include <iostream>
using namespace std;    
class Search
{
    int n;
    int* arr;
public:
    Search(int size)
    {
        n = size;
        arr = new int[n];
    }
    ~Search()
    {
        delete[] arr;
    }
    void inputArray()
    {
        cout << "Enter " << n << " numbers: ";
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    bool searchNumber(int num)
    {
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == num)
                return true;
        }
        return false;
    }
};

int main()
{
    int size, num;
    cout << "Enter the number of elements: ";
    cin >> size;
    Search searchObj(size);
    searchObj.inputArray();
    cout << "Enter the number to search: ";
    cin >> num;
    if(searchObj.searchNumber(num))
        cout << "Number found in the array." << endl;
    else
        cout << "Number not found in the array." << endl;
    return 0;
}