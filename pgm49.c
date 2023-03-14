// Demonstration of a simple function

#include <stdio.h>
int add(int x, int y)
{
    return (x + y);
}

int main()
{
    int a = 0, b = 0, c = 0;
    printf("Enter two numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    c = add(a, b);
    printf("Sum of the two numbers is: %d", c);
    return 0;
}