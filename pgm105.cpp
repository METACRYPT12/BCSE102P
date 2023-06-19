// Demonstration of friend Class

#include <iostream>

using namespace std;

class Box2;

class Box1
{
private:
    int side;

    friend class Box2;

public:
    Box1()
    {
        side = 10;
    }
};

class Box2
{
private:
    int side;

public:
    Box2()
    {
        side = 2;
    }

    int add()
    {
        Box1 objectA;
        return objectA.side + side;
    }
};

int main()
{
    Box2 objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}
