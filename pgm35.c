// Perform the addition of two 3x3 matrices

#include <stdio.h>
int main()
{
    int i, j;
    int a[3][3], b[3][3], c[3][3];
    printf("Enter First 3 X 3 Matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Row %d, Column %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Enter Second 3 X 3 Matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Row %d, Column %d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nThe Sum of the Matrices is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}