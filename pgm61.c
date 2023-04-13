// function with argument with return type

#include <stdio.h>
int even_odd(int x);
int main()
{
    int a = 0, flag = 0;
    printf("Calculate if the number is even or odd\n\n");
    printf("Enter a number: ");
    scanf("%d", &a);
    flag = even_odd(a);
    if (flag)
        printf("%d is Odd", a);
    else
        printf("%d is Even", a);
    return 0;
}
int even_odd(int x)
{
    return (x % 2);
}