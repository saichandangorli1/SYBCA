// 3) Write a CPP program to overload binary minus operator using
// member function.

#include <iostream>
using namespace std;
class Number
{
    int v;
public:
    Number(int v){
        this->v = v;
    }
    Number operator-(Number num2){
        return Number(v - num2.v);
    }
    void display(){
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