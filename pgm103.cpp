// Demonstration of passing an object as an argument

#include <iostream>

using namespace std;

class Rect
{
public:
    int s;
    void add(Rect obj)
    {
        cout << this->s + obj.s;
    }
};

int main()
{
    Rect r1;
    Rect r2;
    r1.s = 10;
    r2.s = 20;
    r1.add(r2);
    return 0;
}
