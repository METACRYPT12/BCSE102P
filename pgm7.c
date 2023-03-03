// Find if the number is positive, negative or zero

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%d is Zero", n);
    }
    else if (n > 0)
    {
        printf("%d is Positive", n);
    }
    else
    {
        printf("%d is Negative", n);
    }
    return 0;
}