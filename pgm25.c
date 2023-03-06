// Find the biggest among n numbers

#include <stdio.h>
int main()
{
    int n, i = 1, biggest;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter n numbers: \n");
    scanf("%d", &a[0]);
    biggest = a[0];
    while (i < n)
    {
        scanf("%d", &a[i]);
        if (biggest < a[i])
        {
            biggest = a[i];
        }
        i++;
    }
    printf("The biggest number is: %d", biggest);
    return 0;
}