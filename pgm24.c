// Biggest among 10 numbers

#include <stdio.h>
int main()
{
    int a[10];
    int i = 1, biggest = 0;
    printf("Enter 10 numbers: \n");
    scanf("%d", &a[0]);
    biggest = a[0];
    while (i < 10)
    {
        scanf("%d", &a[i]);
        if (biggest < a[i])
            biggest = a[i];
        i = i + 1;
    }
    printf("\nThe Biggest number is: %d", biggest);
    return 0;
}