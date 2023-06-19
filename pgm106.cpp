// Demonstration of Single inheritance

#include <iostream>

using namespace std;

class A
{
public:
    int a;
    void set_a(int);
};

void A::set_a(int i)
{
    a = i;
}

class B : public A
{
public:
    int b;
    void set_b(int);
};

void B::set_b(int j)
{
    b = j;
}

int main()
{
    B obj;
    obj.set_a(10);
    obj.set_b(20);
    cout << "a value in A is: " << obj.a << endl;
    cout << "b value in B is: " << obj.b << endl;
}