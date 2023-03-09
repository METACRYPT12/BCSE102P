// Read the characters until $ appears and copy the content into b array and display the content using b array

#include <stdio.h>
int main()
{
    int i = -1;
    char a[300];
    printf("Enter Text: \n");
    do
    {
        i = i + 1;
        scanf("%c", &a[i]);
    } while (a[i] != '$');
    a[i] = '\0';
    char b[i];
    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';
    for (i = 0; b[i] != '\0'; i++)
    {
        printf("%c", b[i]);
    }
}