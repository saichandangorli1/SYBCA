
#include <iostream>
using namespace std;

class dma
{
    int *arr, n;

public:
    void accept()
    {
        cout << "how many no you want to save in memory : ";
        cin >> n;
        arr = new int(n);

        cout << "enter array elems : ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    void display()
    {
        int max, min, i;
        min = max = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];

            if (arr[i] < min)
                min = arr[i];
        }

        cout << "min : " << min << endl;
        cout << "max : " << max << endl;
    }

    void del()
    {
        delete arr;
    }
};

int main()
{
    dma a;
    a.accept();
    a.display();
    a.del();
    return 0;
}