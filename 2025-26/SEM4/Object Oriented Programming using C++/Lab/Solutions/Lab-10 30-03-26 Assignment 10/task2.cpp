// 2) Write a CPP program to overload unary minus operator using friend
// function.

#include <iostream>
using namespace std;
class Number
{
    int v;
public:
    Number(int v){
        this->v = v;
    }
    friend Number operator-(const Number& num){
        return Number(-num.v);
    }
    void display(){
        cout << "Value: " << v << endl;
    }
};

int main()
{
    int value;
    cout << "Enter a number: ";
    cin >> value;
    Number num(value);
    cout << "Original ";
    num.display();
    Number negNum = -num; // Using overloaded unary minus operator
    cout << "Negated ";
    negNum.display();
    return 0;
}