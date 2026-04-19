// Write a CPP program to create student class with rno, name, course and percentage.Create constructor to assign values to data members.Create two objects and display the record of student containing maximum percentage using overloading of > operator.


#include <iostream>
using namespace std;

class Student{
    int rno;
    string name;
    string course;
    float percentage;
    public:
    Student(int r, string n, string c, float p){
        rno = r;
        name = n;
        course = c;
        percentage = p;
    }
    bool operator>(Student s){
        return percentage > s.percentage;
    }
    void display(){
        cout << "RNO: " << rno << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main(){
    Student s1(1, "Alice", "C++", 85.5);
    Student s2(2, "Bob", "C++", 90.0);
    
    if(s1 > s2){
        cout << "Student with maximum percentage:" << endl;
        s1.display();
    } else {
        cout << "Student with maximum percentage:" << endl;
        s2.display();
    }
    
    return 0;
}