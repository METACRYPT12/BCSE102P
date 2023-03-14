// Find if the number is odd or even

#include <stdio.h>
void evenodd(int x)
{
    if (x % 2)
        printf("%d is Odd.", x);
    else
        printf("%d is Even.", x);
    return;
}

int main()
{
    int a = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    return 0;
}