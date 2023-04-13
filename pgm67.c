// Find Fibbonacci series upto n

#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
        return n;
    return (fib(n - 1) + fib(n - 2));
}

int main()
{
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i = 0;
    for (i = 1; i <= n; i++)
        printf("%d\t", fib(i));
    return 0;
}
