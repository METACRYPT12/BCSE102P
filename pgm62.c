// Find the factorial of a given number

#include <stdio.h>
int main()
{
    int fact = 1, num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = num; i > 1; i--)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is: %d", num, fact);
    return 0;
}