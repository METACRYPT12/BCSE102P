// Read a text and copy n characters from the left to another array

#include <stdio.h>
int main()
{
    int i = -1, n = 0;
    char a[300];
    printf("Enter Text: ");
    do
    {
        i = i + 1;
        scanf("%c", &a[i]);
    } while (a[i] != '\n');
    a[i] = '\0';
    printf("How many characters to extract from left: ");
    scanf("%d", &n);
    if (n <= i)
    {
        i = 0;
        char b[n];
        while (i < n)
        {
            b[i] = a[i];
            i = i + 1;
        }
        b[i] = '\0';
        for (i = 0; b[i] != '\0'; i++)
        {
            printf("%c", b[i]);
        }
    }
    else
        printf("Out of Bounds!!!");
    return 0;
}
