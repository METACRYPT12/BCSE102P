// Find the numbers of zeros in a given number

#include <stdio.h>
int main()
{
    int n = 0, sum = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 10 == 0)
            sum = sum + 1;
        n = (int)n / 10;
    }
    printf("%d", sum);
    return 0;
}