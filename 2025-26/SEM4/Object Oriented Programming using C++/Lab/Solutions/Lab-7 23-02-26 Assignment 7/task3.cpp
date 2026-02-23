// Create a class Department with data members as dno, dname, number of employees.Define member functions to accept and display department details.Create pointer object to call the functions.


#include <iostream>
#include <string>
using namespace std;
class Department
{
public:
    int dno;
    string dname;
    int num_employees;

    void accept()
    {
        cout << "Enter department number: ";
        cin >> dno;
        cout << "Enter department name: ";
        cin >> dname;
        cout << "Enter number of employees: ";
        cin >> num_employees;
    }
    void display()
    {
        cout << "Department Number: " << dno << endl;
        cout << "Department Name: " << dname << endl;
        cout << "Number of Employees: " << num_employees << endl;
    }
};


int main()
{
    Department *dept = new Department;
    dept->accept();
    dept->display();
    delete dept;
    return 0;
}