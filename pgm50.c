// Find the biggest among three numbers using ternary operator

#include <stdio.h>

int big(int x, int y, int z)
{
    return x > y ? (x > z ? x : z) : (y > z ? y : z);
}
int main()
{
    int a = 0, b = 0, c = 0, biggest = 0;
    printf("Enter three numbers: ");
    scanf("%d, %d, %d", &a, &b, &c);
    biggest = big(a, b, c);
    printf("Biggest among %d, %d, and %d is: %d", a, b, c, biggest);
    return 0;
}