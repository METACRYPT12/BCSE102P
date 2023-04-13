// Exponent of a number
#include <stdio.h>

int expo(int x, int n)
{
    if (n == 1)
        return x;
    return (x * expo(x, n - 1));
}

int main()
{
    int a = 0, b = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter power of the number: ");
    scanf("%d", &b);
    int pow = expo(a, b);
    printf("Value of %d^%d is: %d", a, b, pow);
    return 0;
}
