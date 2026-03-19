
// 1)	Create a class Distance with data members meter and centimeter.
// i.	Write a constructor to initialize values
// ii.	Create a member function addDistance() to add distances
// iii.	Handle conversion if centimeters exceed 100
// iv.	Display the final result

#include <iostream>
using namespace std;

class Distance
{
    int m, cm;

public:
    Distance(int m = 0, int cm = 0)
    {
        this->m = m;
        this->cm = cm;
    }
    friend Distance addDistance(Distance d1, Distance d2)
    {
        Distance d3;
        d3.m = d1.m + d2.m;
        d3.cm = d1.cm + d2.cm;
        if (d3.cm >= 100)
        {
            d3.m += d3.cm / 100;
            d3.cm = d3.cm % 100;
        }
        return d3;
    }

    void display()
    {
        cout << "Distance: " << m << " meter and " << cm << " centimeter" << endl;
    }
};

int main()
{
    Distance d1(2, 50);
    Distance d2(3, 75);
    Distance d3 = addDistance(d1, d2);
    d3.display();
    return 0;
}