// Read a text and copy the characters from mth position to nth position into another array

#include <stdio.h>
int main()
{
    int i = -1, j = 0, m = 0, n = 0;
    char a[300];
    printf("Enter Text: ");
    do
    {
        i = i + 1;
        scanf("%c", &a[i]);
    } while (a[i] != '\n');
    a[i] = '\0';
    printf("Value of m: ");
    scanf("%d", &m);
    printf("Value of n: ");
    scanf("%d", &n);
    if (m >= 0 && m < n && n <= i)
    {
        char b[n - m + 1];
        i = m;
        while (i < n)
        {
            b[j++] = a[i];
            i = i + 1;
        }
        b[j] = '\0';
        printf("Substring(%d, %d): ", m, n);
        for (i = 0; b[i] != '\0'; i++)
        {
            printf("%c", b[i]);
        }
    }
    else
        printf("Out of Bounds!!!");
    return 0;
}
