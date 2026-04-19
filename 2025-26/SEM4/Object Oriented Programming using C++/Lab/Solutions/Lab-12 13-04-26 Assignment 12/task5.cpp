// 5) Write a CPP program to create a base class Person with name and
// age.
// Derive Staff class from Person with department and experience.
// Derive two classes from Staff as Teaching and Non-Teaching with
// employee id and salary. Display complete staff information.

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

class Staff : public Person {
    public:
        string department;
        int experience;

        Staff(string n, int a, string dept, int exp) : Person(n, a) {
            department = dept;
            experience = exp;
        }
};

class Teaching : public Staff {
    public:
        int emp_id;
        double salary;

        Teaching(string n, int a, string dept, int exp, int id, double s) : Staff(n, a, dept, exp) {
            emp_id = id;
            salary = s;
        }

        void displayInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Department: " << department << endl;
            cout << "Experience: " << experience << " years" << endl;
            cout << "Employee ID: " << emp_id << endl;
            cout << "Salary: " << salary << endl;
        }
};

class NonTeaching : public Staff {
    public:
        int emp_id;
        double salary;

        NonTeaching(string n, int a, string dept, int exp, int id, double s) : Staff(n, a, dept, exp) {
            emp_id = id;
            salary = s;
        }

        void displayInfo() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Department: " << department << endl;
            cout << "Experience: " << experience << " years" << endl;
            cout << "Employee ID: " << emp_id << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main() {
    string name, department;
    int age, experience, emp_id;
    double salary;

    cout << "Enter staff name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter department: ";
    cin >> department;
    cout << "Enter experience (in years): ";
    cin >> experience;
    cout << "Enter employee ID: ";
    cin >> emp_id;
    cout << "Enter salary: ";
    cin >> salary;

    Teaching teaching_staff(name, age, department, experience, emp_id, salary);
    NonTeaching non_teaching_staff(name, age, department, experience, emp_id, salary);

    cout << "\nTeaching Staff Information:" << endl;
    teaching_staff.displayInfo();

    cout << "\nNon-Teaching Staff Information:" << endl;
    non_teaching_staff.displayInfo();

    return 0;
}