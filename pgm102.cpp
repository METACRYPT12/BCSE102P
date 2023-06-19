// Function with Default arguments

#include <iostream>

using namespace std;

float area(float s = 5.0)
{
    return s * s;
}

int main()
{
    float s = 10.0;
    cout << area() << endl;
    cout << area(s) << endl;

    return 0;
}