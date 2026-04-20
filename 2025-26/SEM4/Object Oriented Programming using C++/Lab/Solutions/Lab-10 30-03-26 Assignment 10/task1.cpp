// 1) Write a CPP program to overload unary minus operator using member
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
    Number operator-(){
        return Number(-v);
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
