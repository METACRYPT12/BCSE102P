// Swap two values by Call by Value and Call By reference

#include <stdio.h>
void swap_val(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After Swap:\t\t\ta = %d\tb = %d\n", x, y);
    return;
}
void swap_ref(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After Swap:\t\t\ta = %d\tb = %d\n", *x, *y);
    return;
}
int main()
{
    int a = 0, b = 0;
    printf("Enter two numbers: ");
    scanf("%d, %d", &a, &b);
    printf("Before Call by Value:\t\ta = %d\tb = %d\n", a, b);
    swap_val(a, b);
    printf("After Call by Value:\t\ta = %d\tb = %d\n", a, b);
    printf("Before Call by Reference:\ta = %d\tb = %d\n", a, b);
    swap_ref(&a, &b);
    printf("After Call by Reference:\ta = %d\tb = %d\n", a, b);
    return 0;
}
