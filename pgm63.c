// Fibbonacci series of a given number

#include <stdio.h>
int main()
{
    unsigned long long int a = 0, b = 1, n = 0;
    printf("Enter a number: ");
    scanf("%llu", &n);
    if (n > 2)
    {
        printf("%lld\n%lld", a, b);
        for (unsigned long long int i = 2; i < n; i++)
        {
            b = a + b;
            a = b - a;
            printf("\n%llu", b);
        }
        b = b + 68655966648072413;
        printf("\n\n\n%llu", b);
        b = b + 1;
        printf("\n%llu\n\n", b);
        b = b + 1;
        printf("\n%llu\n\n", b);
        b = b + 1;
        printf("\n%llu\n\n", b);
    }
    else
        printf("Entered number should be greater than 2!");
    return 0;
}