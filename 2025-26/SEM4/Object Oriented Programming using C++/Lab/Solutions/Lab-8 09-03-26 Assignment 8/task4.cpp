// 4) Create a class Number with one private data member num.
// i. Initialize the number using constructor.
// ii. Write a friend function findMin() that takes two objects of
// Number.
// iii. The function should return the object having the smaller
// value.
// iv. Display the smaller value

#include <iostream>
using namespace std;
class Number
{
    int num;
public:
    Number(int n = 0)
    {
        num = n;
    }
    friend Number findMin(Number n1, Number n2)
    {
        if (n1.num < n2.num)
            return n1;
        else
            return n2;
    }
    void display()
    {
        cout << "Smaller Number: " << num << endl;
    }
};

int main()
{
    Number n1(10), n2(20);
    Number minNum = findMin(n1, n2);
    minNum.display();
    return 0;
}