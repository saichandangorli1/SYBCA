// 3) Write a CPP program to create class Teacher with subject and
// teaching hours. Create class Researcher with research area. Create
// class Professor inheriting both and display full profile.

#include <iostream>
using namespace std;

class Teacher {
    public:
        string subject;
        int teaching_hours;

       void accept() {
            cout << "Enter subject: ";
            cin >> subject;
            cout << "Enter teaching hours: ";
            cin >> teaching_hours;
        }
};

class Researcher {
    public:
        string research_area;

        void accept() {
            cout << "Enter research area: ";
            cin >> research_area;
        }
};

class Professor : public Teacher, public Researcher {
    public:
        string name;

        void accept() {
            cout << "Enter professor name: ";
            cin >> name;
            Teacher::accept();
            Researcher::accept();
        }

        void displayProfile() {
            cout << "Name: " << name << endl;
            cout << "Subject: " << subject << endl;
            cout << "Teaching Hours: " << teaching_hours << endl;
            cout << "Research Area: " << research_area << endl;
        }
};

int main() {
    Professor prof;
    prof.accept();
    prof.displayProfile();

    return 0;
}