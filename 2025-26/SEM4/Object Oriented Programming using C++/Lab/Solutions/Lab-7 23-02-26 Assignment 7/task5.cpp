// Write a program to show the use of static properties and static data members.
#include <iostream>
using namespace std;

class Test
{
public:
    int nor;
    static int sta;

    Test()
    {
        sta++;
    }

    void display()
    {
        cout << "Normal: " << nor << ", Static: " << sta << endl;
    }
};

int Test::sta = 50;

int main()
{
    Test t1, t2;

    t1.nor = 10;
    t1.display();
    t2.nor = 20;

    t2.display();

    return 0;
}
