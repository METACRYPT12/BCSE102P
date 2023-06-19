// Demonstration of Multiple Inheritance

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

class B
{
public:
    int b;
    void set_b(int);
};

void B::set_b(int j)
{
    b = j;
}

class C : public B, public A
{
public:
    int c;
    void set_c(int);
};

void C::set_c(int k)
{
    c = k;
}

int main()
{
    C obj;
    obj.set_a(10);
    obj.set_b(20);
    obj.set_c(30);
    cout << "a value in A is: " << obj.a << endl;
    cout << "b value in B is: " << obj.b << endl;
    cout << "c value in C is: " << obj.c << endl;
}