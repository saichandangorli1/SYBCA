// 2)	Create a class Student with data members as RollNo, Name, Course and Percentage.
// i.	Create accept function to accept values.
// ii.	Declare a friend function comparePercentage() that takes two Student objects.
// iii.	Returns the object of the student who scored higher percentage.
// iv.	Display the details of the topper.

#include <iostream>
using namespace std;
class Student
{
    int rno;
    string name;
    string course;
    float percentage;

public:
    void accept()
    {
        cout << "Enter Roll No: ";
        cin >> rno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Course: ";
        cin >> course;
        cout << "Enter Percentage: ";
        cin >> percentage;
    }
    friend Student cmpper(Student s1, Student s2)
    {
        if (s1.percentage > s2.percentage)
            return s1;
        else
            return s2;
    }
    void display()
    {
        cout << "Roll No: " << rno << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Student s1, s2;
    cout << "Enter details of student 1:" << endl;
    s1.accept();
    cout << "Enter details of student 2:" << endl;
    s2.accept();
    Student topper = cmpper(s1, s2);
    cout << "\nTopper Details:" << endl;
    topper.display();
    return 0;
}