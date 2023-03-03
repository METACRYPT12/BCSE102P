// Find the biggest among three numbers using ternary operators

#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("%d", d);
    return 0;
}