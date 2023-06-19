// Swap using call by reference

#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 100;
    int b = 200;
    cout << a << endl
         << b << endl;
    swap(a, b);
}