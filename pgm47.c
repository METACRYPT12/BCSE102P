// Read a text and convert the characters into LowerCase letters

#include <stdio.h>
int main()
{
    int i = -1;
    char a[300];
    printf("Enter Text: ");
    do
    {
        i = i + 1;
        scanf("%c", &a[i]);
    } while (a[i] != '\n');
    a[i] = '\0';
    i = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i] + 32;
        i = i + 1;
    }
    for (i = 0; a[i] != '\0'; i++)
    {
        printf("The String in LowerCase is: %c", a[i]);
    }
    return 0;
}
