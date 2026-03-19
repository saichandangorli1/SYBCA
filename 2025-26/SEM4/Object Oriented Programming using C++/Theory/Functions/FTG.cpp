
// #include <iostream>
// #include <string>
// using namespace std;

// class emp
// {
//     int empid;
//     string name;
// };

// int main()
// {
//         return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    string course;
    // string course2;

    void accept()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Course Name: ";
        cin >> course;
        // cout << "Enter Course Name: ";
        // cin >> course2;
    }

    void display()
    {
        cout << "\nStudent Details:" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    Student student1;

    student1.accept();
    student1.display();

    return 0;
}
