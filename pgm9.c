// Find if the given character is vowel or not

#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Not a Vowel");
    }
    return 0;
}