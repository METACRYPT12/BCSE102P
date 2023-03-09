// Read the characters until $ appears and count the number of characters, lines, and words

#include <stdio.h>
int main()
{
    int cc = -1, cl = 1, cw = 0, i = -1;
    char a[300];
    printf("Enter Text: \n");
    do
    {
        i = i + 1;
        scanf("%c", &a[i]);
        if (a[i] == '\n')
        {
            cl = cl + 1;
            continue;
        }
        cc = cc + 1;
    } while (a[i] != '$');
    a[i] = '\0';
    i = 0;
    while (a[i] != '\0')
    {
        if ((a[i] != ' ' && a[i] != '\t' && a[i] != '\n') && (a[i + 1] == ' ' || a[i + 1] == '\t' || a[i + 1] == '\n'))
            cw = cw + 1;
        i = i + 1;
    }
    printf("Number of Characters: %d\nNumber of Words: %d\nNumber of Lines: %d", cc, cw, cl);
}