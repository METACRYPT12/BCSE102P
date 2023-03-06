// Read and display a character until a '$'

#include <stdio.h>
int main()
{
    char ch;
    while (1)
    {
        printf("Enter a Character ($ to terminate): ");
        scanf(" %c", &ch);
        if (ch != '$')
            printf("Entered Character is: %c\n", ch);
        else
        {
            printf("Exiting!!");
            break;
        }
    }
    return 0;
}