// Read the numbers continuously and check if the number is positive, negative or zero

#include <stdio.h>
int main()
{
    int n;
    while (1)
    {
        printf("Enter a number(Enter -1000 to exit): ");
        scanf("%d", &n);
        if (n == -1000)
        {
            break;
        }
        if (n == 0)
        {
            printf("%d is Zero\n", n);
        }
        else if (n > 0)
        {
            printf("%d is Positive\n", n);
        }
        else
        {
            printf("%d is Negative\n", n);
        }
    }
    return 0;
}