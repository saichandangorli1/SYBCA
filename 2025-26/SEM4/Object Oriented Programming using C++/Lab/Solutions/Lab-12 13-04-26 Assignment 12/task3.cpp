// 3) Write a CPP program to create class Teacher with subject and
// teaching hours. Create class Researcher with research area. Create
// class Professor inheriting both and display full profile.

#include <iostream>
using namespace std;

class Teacher {
    public:
        string subject;
        int teaching_hours;

        Teacher(string sub, int hours) {
            subject = sub;
            teaching_hours = hours;
        }
};

class Researcher {
    public:
        string research_area;

        Researcher(string area) {
            research_area = area;
        }
};

class Professor : public Teacher, public Researcher {
    public:
        string name;

        Professor(string n, string sub, int hours, string area) : Teacher(sub, hours), Researcher(area) {
            name = n;
        }

        void displayProfile() {
            cout << "Name: " << name << endl;
            cout << "Subject: " << subject << endl;
            cout << "Teaching Hours: " << teaching_hours << endl;
            cout << "Research Area: " << research_area << endl;
        }
};

int main() {
    string name, subject, research_area;
    int teaching_hours;

    cout << "Enter professor name: ";
    cin >> name;
    cout << "Enter subject: ";
    cin >> subject;
    cout << "Enter teaching hours: ";
    cin >> teaching_hours;
    cout << "Enter research area: ";
    cin >> research_area;

    Professor prof(name, subject, teaching_hours, research_area);
    prof.displayProfile();

    return 0;
}