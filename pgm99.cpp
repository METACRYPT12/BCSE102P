// Demonstration of inline function

#include <iostream>

using namespace std;

inline int square(int a)
{
    return a * a;
}

int main()
{
    cout << "The area of square is: " << square(3) << endl;
}