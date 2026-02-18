#include <iostream>
using namespace std;

float gross_salary(float bs, float hra, float da, float ta)
{
    return bs + hra + da + ta;
}

void net_salary(float gross_sal, float pt, float pf)
{
    float net = gross_sal - (pt + pf);
    cout << "Gross Salary: " << gross_sal << endl;
    cout << "Net Salary: " << net << endl;
}

int main()
{
    float bs, hra, da, ta, pt, pf;

    cout << "Enter Basic Salary: ";
    cin >> bs;
    cout << "Enter HRA, DA, and TA: ";
    cin >> hra >> da >> ta;
    cout << "Enter PT and PF: ";
    cin >> pt >> pf;

    float gs = gross_salary(bs, hra, da, ta);
    net_salary(gs, pt, pf);

    return 0;
}