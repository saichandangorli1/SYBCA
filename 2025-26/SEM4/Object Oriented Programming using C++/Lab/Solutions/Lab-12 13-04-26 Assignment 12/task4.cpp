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

        void accept() {
            cout << "Enter student name: ";
            cin >> name;
            cout << "Enter roll number: ";
            cin >> roll_number;
        }
};

class Science : public Student {
    public:
        float physics_marks;
        float chemistry_marks;

        void accept() {
            Student::accept();
            cout << "Enter physics marks: ";
            cin >> physics_marks;
            cout << "Enter chemistry marks: ";
            cin >> chemistry_marks;
        }

        void displayResult() {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << roll_number << endl;
            cout << "Physics Marks: " << physics_marks << endl;
            cout << "Chemistry Marks: " << chemistry_marks << endl;
        }
};

class Commerce : public Student {
    public:
        float accounts_marks;
        float business_communication_marks;

        void accept() {
            Student::accept();
            cout << "Enter accounts marks: ";
            cin >> accounts_marks;
            cout << "Enter business communication marks: ";
            cin >> business_communication_marks;
        }

        void displayResult() {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << roll_number << endl;
            cout << "Accounts Marks: " << accounts_marks << endl;
            cout << "Business Communication Marks: " << business_communication_marks << endl;
        }
};

int main() {
    Science sci_student;
    Commerce com_student;

    cout << "Enter details for Science student:" << endl;
    sci_student.accept();
    cout << "\nScience Student Result:" << endl;
    sci_student.displayResult();

    cout << "\nEnter details for Commerce student:" << endl;
    com_student.accept();
    cout << "\nCommerce Student Result:" << endl;
    com_student.displayResult();

    return 0;
}