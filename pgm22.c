// Demonstration of Do-While

#include <stdio.h>

int main()
{
    int i = 1, n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    do
    {
        printf("%d * %d = %d\n", n, i, i * n);
        i = i + 1;
    } while (i <= 10);
    return 0;
}