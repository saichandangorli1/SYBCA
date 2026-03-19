// Create a class Student with the data members as Roll number, Name, Course and Percentage.Define member functions to accept and display student details of ‘n’ students.Write a function to display details of topper student.

#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    int rollno;
    string name;
    string course;
    float percentage;

    void accept()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter course: ";
        cin >> course;
        cout << "Enter percentage: ";
        cin >> percentage;
    }
    void display()
    {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Percentage: " << percentage << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student students[5];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of student " << i + 1 << ":" << endl;
        students[i].accept();
    }
    cout << "Details of students:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ":" << endl;
        students[i].display();
    }
    float max_perc = 0;
    int topper_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (students[i].percentage > max_perc)
        {
            max_perc = students[i].percentage;
            topper_index = i;
        }
    }
    cout << "Topper student details:" << endl;
    students[topper_index].display();
    return 0;
}