// Read a text from the user and reverse it

#include <stdio.h>
int main()
{
    int i = -1, j = 0;
    char a[300];
    printf("Enter Text: ");
    do
    {
        i = i + 1;
        scanf("%c", &a[i]);
    } while (a[i] != '\n');
    a[i] = '\0';
    char b[i];
    i = i - 1;
    while (i >= 0)
    {
        b[j] = a[i];
        j = j + 1;
        i = i - 1;
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        printf("The Reversed String is: %c", b[i]);
    }
    return 0;
}
