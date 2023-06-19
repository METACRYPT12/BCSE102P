// Transpose of a 3 x 3 matrix

#include <iostream>

using namespace std;

int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int t[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t[j][i] = arr[i][j];
        }
    }
    cout << "\nThe matrix is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << t[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
