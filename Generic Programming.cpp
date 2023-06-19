// Generic Programming

#include <iostream>
#include <cstring>

using namespace std;

template <class T>
T add(T a, T b, T c, T d, T e)
{
    T result = a + b + c + d + e;
    return result;
}

int main()
{
    float l[5];
    string temp;
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        if (temp.back() == 'L')
        {
            temp = strtok(&temp[0], "L");
            l[i] = stoi(temp);
        }
        else
            l[i] = stoi(temp);
    }
    cout << "sum is: " << add(l[0], l[1], l[2], l[3], l[4]) << endl;

    return 0;
}