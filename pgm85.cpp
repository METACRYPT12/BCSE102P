// Swap two numbers using function

#include <iostream>

using namespace std;
void swap(int a, int b);
int main()
{
    int a = 0, b = 0;
    cin >> a;
    cin >> b;
    cout << "Before swap: \na = " << a << "\nb = " << b << endl;
    swap(a, b);
    cout << "After swap: \na = " << a << "\nb = " << b << endl;
    return 0;
}

void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "In swap function: \na = " << a << "\nb = " << b << endl;
}