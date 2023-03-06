// Count the number of Positive, Negative and zero

#include <stdio.h>
int main()
{
    int n, i = 0, a[3];
    a[0] = 0, a[1] = 0, a[2] = 0;
    while (i < 5)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n == 0)
        {
            a[0]++;
        }
        else if (n > 0)
        {
            a[1]++;
        }
        else
        {
            a[3]++;
        }
        i++;
    }
    printf("Number of Positive numbers: %d\nNumber of Negative numbers: %d\nNumber of Zeros: %d\n", a[0], a[1], a[2]);
    return 0;
}