// Function without arguments and withour return type

#include <stdio.h>
void sum();
int main()
{
    printf("Calculate the sum of two numbers\n\n");
    sum();
    return 0;
}
void sum()
{
    int a = 0, b = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The sum is: %d", (a + b));
    return;
}