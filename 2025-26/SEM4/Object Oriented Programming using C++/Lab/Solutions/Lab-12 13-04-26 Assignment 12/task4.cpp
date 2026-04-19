// 4) Write a CPP program to create a base class Student with name and
// roll number. Derive Science and Commerce classes from student.
// Science stores physics and chemistry marks. Commerce stores
// accounts and business communication marks. Display respective
// results for both the classes.


#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        int roll_number;

        Student(string n, int r) {
            name = n;
            roll_number = r;
        }
};

class Science : public Student {
    public:
        double physics_marks;
        double chemistry_marks;

        Science(string n, int r, double p, double c) : Student(n, r) {
            physics_marks = p;
            chemistry_marks = c;
        }

        void displayResults() {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << roll_number << endl;
            cout << "Physics Marks: " << physics_marks << endl;
            cout << "Chemistry Marks: " << chemistry_marks << endl;
        }
};

class Commerce : public Student {
    public:
        double accounts_marks;
        double business_communication_marks;

        Commerce(string n, int r, double a, double b) : Student(n, r) {
            accounts_marks = a;
            business_communication_marks = b;
        }

        void displayResults() {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << roll_number << endl;
            cout << "Accounts Marks: " << accounts_marks << endl;
            cout << "Business Communication Marks: " << business_communication_marks << endl;
        }
};

int main() {
    string name;
    int roll_number;
    double physics_marks, chemistry_marks, accounts_marks, business_communication_marks;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll_number;

    cout << "Enter physics marks: ";
    cin >> physics_marks;
    cout << "Enter chemistry marks: ";
    cin >> chemistry_marks;

    Science science_student(name, roll_number, physics_marks, chemistry_marks);
    science_student.displayResults();

    cout << "Enter accounts marks: ";
    cin >> accounts_marks;
    cout << "Enter business communication marks: ";
    cin >> business_communication_marks;

    Commerce commerce_student(name, roll_number, accounts_marks, business_communication_marks);
    commerce_student.displayResults();

    return 0;
}