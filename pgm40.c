// Read and display a Line

#include <stdio.h>
int main()
{
    char wrd[300];
    int i = 0;
    printf("Input: ");
    do
    {

        scanf("%c", &wrd[++i]);
        printf("%c", wrd[i]);
    } while (wrd[i] != '\n');
    return 0;
}