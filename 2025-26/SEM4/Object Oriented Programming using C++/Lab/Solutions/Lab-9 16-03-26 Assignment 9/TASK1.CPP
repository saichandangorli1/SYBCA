// 1) Write a CPP program to create a class Car with the data members
// Car Model name and Car Price. Use a constructor to initialize the
// values and a destructor that displays a message “Car object is
// destroyed” when the object goes out of scope.

#include <iostream>
using namespace std;
class Car
{
    string modelName;
    double price;
public:
    Car(string name, double p)
    {
        modelName = name;
        price = p;
    }
    ~Car()
    {
        cout << "Car object is destroyed" << endl;
    }
    void display()
    {
        cout << "Car Model: " << modelName << ", Price: $" << price << endl;
    }
};

int main()
{
    Car car1("Toyota Camry", 24000);
    car1.display();
    return 0;
}