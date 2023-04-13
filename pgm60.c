// function with argument without return type

#include <stdio.h>
void sum(int x, int y);
int main()
{
    int a = 0, b = 0;
    printf("Calculate the sum of two numbers\n\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}
void sum(int x, int y)
{
    printf("The sum is: %d", (x + y));
    return;
}