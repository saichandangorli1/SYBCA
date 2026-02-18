// 2) Create a class Student with the data members as Roll number, Name, Marks in three subjects. Define member functions to Accept student details, Calculate the total and average marks and display the student information along with total and average

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int srno;
    string name;
    int marks[3];
    int total;
    float average;

    void accept()
    {
        cout << "Enter Roll Number: ";
        cin >> srno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks in three subjects: ";
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }

    void calculate()
    {
        total = 0;
        for (int i = 0; i < 3; i++)
        {
            total += marks[i];
        }
        average = total / 3.0;
    }

    void display()
    {
        cout << "Roll Number: " << srno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks in three subjects: ";
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
    }
};

int main()
{
    Student s;
    s.accept();
    s.calculate();
    s.display();
    return 0;
}