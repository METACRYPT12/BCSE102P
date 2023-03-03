// Find biggest among two numbers using ternary operator

#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    c = a > b ? a : b;
    printf("%d", c);
    return 0;
}