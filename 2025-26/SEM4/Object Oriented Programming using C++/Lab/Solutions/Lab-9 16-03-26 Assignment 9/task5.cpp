// Write a CPP program to find simple interest using dynamic
//     initialization of object concept

#include <iostream>
using namespace std;
class SimpleInterest
{
    double principal, rate, time;

public:
    SimpleInterest(double p, double r, double t)
    {
        principal = p;
        rate = r;
        time = t;
    }
    double calculateInterest()
    {
        return (principal * rate * time) / 100;
    }
};

int main()
{
    double principal, rate, time;
    cout << "Enter principal amount, rate of interest and time (in years): ";
    cin >> principal >> rate >> time;
    SimpleInterest si(principal, rate, time);
    double interest = si.calculateInterest();
    cout << "Simple Interest: " << interest << endl;
    return 0;
}