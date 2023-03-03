// Write a program to reverse a given number

#include <stdio.h>
int main()
{
    int n = 0, rev = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n = (int)n / 10;
    }
    printf("%d", rev);
    return 0;
}