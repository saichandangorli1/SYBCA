// 5) Create a class Complex with data members real and imag.
// i. Write a constructor to initialize values.
// ii. Declare a friend function addComplex() that takes two
// objects of Complex as arguments.
// iii. The function should return a new object containing the sum.
// iv. Display the addition.


#include <iostream>
using namespace std;
class Complex
{
    int real, imag;
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    friend Complex addComplex(Complex c1, Complex c2)
    {
        Complex c3;
        c3.real = c1.real + c2.real;
        c3.imag = c1.imag + c2.imag;
        return c3;
    }
    void display()
    {
        cout << "Sum: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(2, 3), c2(4, 5);
    Complex sum = addComplex(c1, c2);
    sum.display();
    return 0;
}