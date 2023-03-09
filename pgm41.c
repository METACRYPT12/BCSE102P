// Read the Sentence until '$' appears and count the number of UpperCase, LowerCase, Special case characters and digits

#include <stdio.h>
int main()
{
    char wrd[300];
    int a[4] = {0, 0, 0, -1};
    int i = -1;
    printf("Input: ");
    do
    {

        scanf("%c", &wrd[++i]);
        if (wrd[i] >= 'A' && wrd[i] <= 'Z')
            a[0]++;
        else if (wrd[i] >= 'a' && wrd[i] <= 'z')
            a[1]++;
        else if (wrd[i] >= '0' && wrd[i] <= '9')
            a[2]++;
        else
            a[3]++;
    } while (wrd[i] != '$');
    printf("\n\nUpperCase Characters: %d\nLowerCase Characters: %d\nDigits: %d\nSpecial Characters: %d\n", a[0], a[1], a[2], a[3]);
    return 0;
}