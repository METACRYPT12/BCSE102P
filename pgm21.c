// Print the Multiplication table for a given number

#include <stdio.h>

int main()
{
    int i = 1, n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d * %d = %d\n", n, i, i * n);
        i = i + 1;
    }
    return 0;
}