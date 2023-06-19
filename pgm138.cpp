#include <iostream>

using namespace std;

template <class T>
T max1(T a, T b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    cout << max1('a', 'b') << endl;
    cout << max1(12, 123) << endl;
    cout << max1(123.21f, 12.12f) << endl;
}