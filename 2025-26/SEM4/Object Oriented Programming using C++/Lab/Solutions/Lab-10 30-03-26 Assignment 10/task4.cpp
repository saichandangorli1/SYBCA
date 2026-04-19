// Write a CPP program to overload binary minus operator using friend function

#include <iostream>
using namespace std;
class Number
{
    int v;

public:
    Number(int v)
    {
        this->v = v;
    }
    friend Number operator-(Number num1, Number num2)
    {
        return Number(num1.v - num2.v);
    }
    void display()
    {
        cout << "Value: " << v << endl;
    }
};
int main()
{
    Number num1(10);
    Number num2(5);
    Number result = num1 - num2; // Using overloaded binary minus operator
    cout << "Result: ";
    result.display();
    return 0;
}