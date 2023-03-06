// Classify if the character is upper, lower, digit or special until '$'

#include <stdio.h>
int main()
{
    char ch;
    while (1)
    {
        printf("Enter a Character ($ to terminate): ");
        scanf(" %c", &ch);
        if (ch == '$')
        {
            printf("Exiting!!!");
            break;
        }
        else if (ch >= 'A' && ch <= 'Z')
            printf("%c is in UpperCase.\n", ch);
        else if (ch >= 'a' && ch <= 'z')
            printf("%c is in LowerCase.\n", ch);
        else if (ch >= '0' && ch <= '9')
            printf("%c is a Digit.\n", ch);
        else
            printf("%c is a Special Character.\n", ch);
    }
    return 0;
}