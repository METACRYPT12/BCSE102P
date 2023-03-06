// Read and display a word until ' '

#include <stdio.h>
int main()
{
    char wrd[100];
    int i = 0;
    printf("Input: ");
    scanf("%c", &wrd[i]);
    while (wrd[i] != '\x20')
    {
        printf("%c", wrd[i]);
        scanf("%c", &wrd[++i]);
    }
    return 0;
}