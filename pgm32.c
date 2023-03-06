// Count if the character is upper, lower, digit or special until '$'

#include <stdio.h>
int main()
{
    char ch;
    int a[4] = {0, 0, 0, 0};
    while (1)
    {
        printf("Enter a Character ($ to terminate): ");
        scanf(" %c", &ch);
        if (ch == '$')
            break;
        else if (ch >= 'A' && ch <= 'Z')
            a[0]++;
        else if (ch >= 'a' && ch <= 'z')
            a[1]++;
        else if (ch >= '0' && ch <= '9')
            a[2]++;
        else
            a[3]++;
    }
    printf("UpperCase Characters: %d\nLowerCase Characters: %d\nDigits: %d\nSpecial Characters: %d\n", a[0], a[1], a[2], a[3]);
    return 0;
}