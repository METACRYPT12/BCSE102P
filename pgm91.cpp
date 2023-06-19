// Demonstration of "this" pointer

#include <iostream>

using namespace std;

class Box
{
private:
    double length;
    double breadth;
    double height;

public:
    Box(double length, double breadth, double height);
    ~Box();
    double getVolume(void);
};

Box::Box(double length, double breadth, double height)
{
    this->length = length;
    this->breadth = breadth;
    this->height = height;
    cout << "Box Created!" << endl;
}

Box::~Box()
{
    cout << "Box Destroyed!" << endl;
}

double Box::getVolume()
{
    return this->length * this->breadth * this->height;
}

int main()
{
    Box Box1(6.0, 7.0, 5.0);
    double volume = 0.0;

    volume = Box1.getVolume();
    cout << "Volume of Box : " << volume << endl;
    return 0;
}