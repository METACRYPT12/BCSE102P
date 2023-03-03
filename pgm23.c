// Read an display 10 numbers

#include <stdio.h>
int main()
{
    int a[10];
    int i = 0;
    printf("Enter 10 numbers: \n");
    while (i < 10)
    {
        scanf("%d", &a[i]);
        i = i + 1;
    }
    i = 0;
    printf("\n\nThe numbers are: \n\n");
    while (i < 10)
    {
        printf("%d\n", a[i]);
        i = i + 1;
    }
    return 0;
}