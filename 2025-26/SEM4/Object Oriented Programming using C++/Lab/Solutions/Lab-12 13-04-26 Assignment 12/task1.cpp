// 1) Write a CPP program to create a base class Employee with name and
// basic salary. Create a derived class Salary that calculates HRA (20%)
// and DA (10%) and displays the total salary.

#include <iostream>
using namespace std;

class Employee {
    public:
        string name;
        double basic_salary;

        Employee(string n, double bs) {
            name = n;
            basic_salary = bs;
        }
};

class Salary : public Employee {
    public:
        Salary(string n, double bs) : Employee(n, bs) {}

        void displayTotalSalary() {
            double hra = basic_salary * 0.20;
            double da = basic_salary * 0.10;
            double total_salary = basic_salary + hra + da;
            cout << "Total Salary: " << total_salary << endl;
        }
};

int main() {
    string name;
    double basic_salary;

    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter basic salary: ";
    cin >> basic_salary;

    Salary emp(name, basic_salary);
    emp.displayTotalSalary();

    return 0;
}