// Read a text and copy n characters from the right to another array

#include <stdio.h>
int main()
{
    int i = -1, j = 0, k = 0, n = 0;
    char a[300];
    printf("Enter Text: ");
    do
    {
        i = i + 1;
        scanf("%c", &a[i]);
    } while (a[i] != '\n');
    a[i] = '\0';
    printf("How many characters to extract from right: ");
    scanf("%d", &n);
    if (n <= i)
    {
        char b[n + 1];
        j = i - n;
        while (j < i)
        {
            b[k++] = a[j];
            j = j + 1;
        }
        b[k] = '\0';
        for (i = 0; b[i] != '\0'; i++)
        {
            printf("%c", b[i]);
        }
    }
    else
        printf("Out of Bounds!!!");
    return 0;
}
