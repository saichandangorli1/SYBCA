// 5) Create a class Employee with the data members as employee
// Number, Name, Salary. Define member functions to Accept and
// Display employee details of ‘n’ employees

#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    int empNo;
    string name;
    float salary;

    void accept()
    {
        cout << "Enter Employee Number: ";
        cin >> empNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "Employee Number: " << empNo << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee emp[10];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of employee " << i + 1 << ":" << endl;
        emp[i].accept();
    }
    cout << "Employee Details:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Employee " << i + 1 << ":" << endl;
        emp[i].display();
    }   
return 0;
}