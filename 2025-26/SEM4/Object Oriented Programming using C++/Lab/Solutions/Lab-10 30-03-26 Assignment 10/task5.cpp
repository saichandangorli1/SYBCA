// Write a CPP program to overload binary plus operator on string using member function.

#include <iostream>
using namespace std;
class MyString
{
    string str;

public:
    MyString(string s)
    {
        str = s;
    }
    MyString operator+(MyString s2)
    {
        return MyString(str + s2.str);
    }
    void display()
    {
        cout << "String: " << str << endl;
    }
};

int main()
{
    MyString s1("Hello, ");
    MyString s2("World!");
    MyString result = s1 + s2; // Using overloaded binary plus operator
    result.display();
    return 0;}