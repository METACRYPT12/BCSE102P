// Overloading Function template

#include <iostream>

using namespace std;

template <class X>
void fun(X a)
{
    cout << "Value of a is: " << a << endl;
}

template <class X, class Y>
void fun(X b, Y c)
{
    cout << "Value of b is: " << b << endl;
    cout << "Value of c is: " << c << endl;
}

int main()
{
    fun(12);
    fun(45, 56.8);
    return 0;
}