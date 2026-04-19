// 2) Write a CPP program to create a class Person with name and age.
// Derive Employee class from Person with Employee id and salary.
// Further derive Department class from Employee with department name and number of employees of the department. Display all details.

#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;

        Person(string n, int a) {
            name = n;
            age = a;
        }
};

class Employee : public Person {
    public:
        int emp_id;
        double salary;

        Employee(string n, int a, int id, double s) : Person(n, a) {
            emp_id = id;
            salary = s;
        }
};

class Department : public Employee {
    public:
        string dept_name;
        int num_employees;

        Department(string n, int a, int id, double s, string dept, int num_emps) : Employee(n, a, id, s) {
            dept_name = dept;
            num_employees = num_emps;
        }
};

int main() {
    string name, dept_name;
    int age, emp_id, num_employees;
    double salary;

    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter employee ID: ";
    cin >> emp_id;
    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter department name: ";
    cin >> dept_name;
    cout << "Enter number of employees in the department: ";
    cin >> num_employees;

    Department dept(name, age, emp_id, salary, dept_name, num_employees);

    cout << "\nEmployee Details:" << endl;
    cout << "Name: " << dept.name << endl;
    cout << "Age: " << dept.age << endl;
    cout << "Employee ID: " << dept.emp_id << endl;
    cout << "Salary: " << dept.salary << endl;
    cout << "Department Name: " << dept.dept_name << endl;
    cout << "Number of Employees in Department: " << dept.num_employees << endl;

    return 0;
}