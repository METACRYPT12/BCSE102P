// Find sum of digits of a given number

#include <stdio.h>
int main()
{
    int n = 0, sum = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        sum = sum + (n % 10);
        n = (int)n / 10;
    }
    printf("%d", sum);
    return 0;
}