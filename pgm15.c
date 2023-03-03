// Find if the given number is palindrome or not

#include <stdio.h>
int main()
{
    int n = 0, rev = 0;
    scanf("%d", &n);
    int tmp = n;
    while (tmp != 0)
    {
        rev = (rev * 10) + (tmp % 10);
        tmp = (int)tmp / 10;
    }
    if (n == rev)
    {
        printf("%d is a palindrome number", n);
    }
    else
    {
        printf("%d is not a palindrome number", n);
    }
    return 0;
}