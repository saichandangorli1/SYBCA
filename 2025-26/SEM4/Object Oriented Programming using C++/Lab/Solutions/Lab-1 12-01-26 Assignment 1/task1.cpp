// // 1)	Write a CPP program to find addition and subtraction of two numbers.
// #include <iostream>
// using namespace std;
// int main(){
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     int addition = num1 + num2;
//     int subtraction = num1 - num2;

//     cout << "Addition: " << addition << endl;
//     cout << "Subtraction: " << subtraction << endl;

//     return 0;
// }

// swap by call by reference

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 5;
    int b = 6;
    cout << a << b;

    swap(a, b);
    cout << a << b;
}

// wacppp to find sum and prd of 1st n numbers using function concept (two different function)

