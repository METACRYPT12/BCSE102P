// Program to find GCD of a number

#include <stdio.h>

int gcd(int x, int y)
{
    if (x % y == 0)
        return y;
    return (gcd(y, x % y));
}

int main()
{
    int a = 0, b = 0;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    int GCD = gcd(a, b);
    printf("GCD of %d and %d is: %d", a, b, GCD);
    return 0;
}
