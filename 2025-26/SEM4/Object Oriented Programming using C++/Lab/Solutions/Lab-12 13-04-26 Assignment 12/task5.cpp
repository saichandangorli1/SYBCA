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

        void accept() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
        }
};

class Staff : public Person {
    public:
        string department;
        int experience;

        void accept() {
            Person::accept();
            cout << "Enter department: ";
            cin >> department;
            cout << "Enter experience (in years): ";
            cin >> experience;
        }
};

class Teaching : public Staff {
    public:
        int emp_id;
        double salary;

        void accept() {
            Staff::accept();
            cout << "Enter employee ID: ";
            cin >> emp_id;
            cout << "Enter salary: ";
            cin >> salary;
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

        void accept() {
            Staff::accept();
            cout << "Enter employee ID: ";
            cin >> emp_id;
            cout << "Enter salary: ";
            cin >> salary;
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
    Teaching teach;
    NonTeaching nonTeach;

    cout << "Enter details for Teaching Staff:" << endl;
    teach.accept();
    cout << "\nTeaching Staff Information:" << endl;
    teach.displayInfo();

    cout << "\nEnter details for Non-Teaching Staff:" << endl;
    nonTeach.accept();
    cout << "\nNon-Teaching Staff Information:" << endl;
    nonTeach.displayInfo();

    return 0;
}