// 1) Create a class Vehicle with the data members as Vehicle number, Vehicle Name, Vehicle Company name and Price.Define member functions to Accept and Display vehicle details.

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:

    string vno;
    string vname;
    string vcompany;
    float vprice;

    void accept()
    {
        cout << "Enter Vehicle Number: ";
        cin >> vno;
        cout << "Enter Vehicle Name: ";
        cin >> vname;
        cout << "Enter Vehicle Company Name: ";
        cin >> vcompany;
        cout << "Enter Vehicle Price: ";
        cin >> vprice;
    }

    void display()
    {
        cout << "Vehicle Number: " << vno << endl;
        cout << "Vehicle Name: " << vname << endl;
        cout << "Vehicle Company Name: " << vcompany << endl;
        cout << "Vehicle Price: " << vprice << endl;
    }
};

int main()
{
    Vehicle v;
    v.accept();
    v.display();
    return 0;
}