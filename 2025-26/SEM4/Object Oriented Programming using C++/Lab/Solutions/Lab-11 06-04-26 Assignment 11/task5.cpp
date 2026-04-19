// 5) Write a CPP program to create employee class with employee name,
// designation, department, age and salary. Accept records of two
// employees and display the record of younger employee using operator
// overloading concept.

#include <iostream>
using namespace std;

class Employee{
    string name;
    string designation;
    string department;
    int age;
    float salary;
    public:
    Employee(string n, string d, string dept, int a, float s){
        name = n;
        designation = d;
        department = dept;
        age = a;
        salary = s;
    }
    bool operator<(Employee e){
        return age < e.age;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Department: " << department << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main(){
    Employee e1("Alice", "Manager", "IT", 30, 50000.0);
    Employee e2("Bob", "Developer", "IT", 25, 45000.0);

    if(e1 < e2){
        cout << "Younger employee:" << endl;
        e1.display();
    } else {
        cout << "Younger employee:" << endl;
        e2.display();
    }

    return 0;
}