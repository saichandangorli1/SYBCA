// 2) Write a CPP program to create a class Person with name and age.
// Derive Employee class from Person with Employee id and salary.
// Further derive Department class from Employee with department name and number of employees of the department. Display all details.

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void accept()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Employee : public Person
{
public:
    int emp_id;
    double salary;

    void accept()
    {
        Person::accept();
        cout << "Enter employee ID: ";
        cin >> emp_id;
        cout << "Enter salary: ";
        cin >> salary;
    }
};

class Department : public Employee
{
public:
    string dept_name;
    int num_employees;

    void accept()
    {
        Employee::accept();
        cout << "Enter department name: ";
        cin >> dept_name;
        cout << "Enter number of employees in the department: ";
        cin >> num_employees;
    }

    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department Name: " << dept_name << endl;
        cout << "Number of Employees in Department: " << num_employees << endl;
    }
};

int main()
{
    Department dept;
    dept.accept();
    dept.displayDetails();

    return 0;
}