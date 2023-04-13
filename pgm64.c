// Demonstration of a recursive function (factorial)

#include <stdio.h>

int fact(int n)
{
    if (n < 2)
        return 1;
    return (n * fact(n - 1));
}

int main()
{
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int factorial = fact(num);
    printf("Factorial of %d is: %d", num, factorial);
    return 0;
}
