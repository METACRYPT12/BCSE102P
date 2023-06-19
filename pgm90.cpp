// Demonstration of Constructor

#include <iostream>

using namespace std;

class Box
{
private:
    double length;
    double breadth;
    double height;

public:
    Box(double l, double b, double h);
    ~Box();
    double getVolume(void);
};

Box::Box(double l, double b, double h)
{
    length = l;
    breadth = b;
    height = h;
    cout << "Box Created!" << endl;
}

Box::~Box()
{
    cout << "Box Destroyed!" << endl;
}

double Box::getVolume()
{
    return length * breadth * height;
}

int main()
{
    Box Box1(6.0, 7.0, 5.0);
    double volume = 0.0;

    volume = Box1.getVolume();
    cout << "Volume of Box : " << volume << endl;
    return 0;
}