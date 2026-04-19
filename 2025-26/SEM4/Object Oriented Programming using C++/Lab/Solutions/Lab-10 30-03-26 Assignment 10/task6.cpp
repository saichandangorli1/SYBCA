// Write a CPP program to overload binary plus operator on string using friend function.

#include <iostream>
using namespace std;

class Mystr
{
    string str;

public:
    Mystr(string s) : str(s) {}
    friend Mystr operator+(Mystr s1, Mystr s2)
    {
        return Mystr(s1.str + s2.str);
    }
    void display()
    {
        cout << "String: " << str << endl;
    }
};

int main()
{
    Mystr s1("Hello, ");
    Mystr s2("World!");
    Mystr result = s1 + s2; // Using overloaded binary plus operator
    result.display();
    return 0;
}