// Find if the given operator is Arithmetic or not

#include <stdio.h>

int main()
{
    char ch;
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
        printf("Arithmetic Operator\n");
        break;

    case '-':
        printf("Arithmetic Operator\n");
        break;

    case '*':
        printf("Arithmetic Operator\n");
        break;

    case '/':
        printf("Arithmetic Operator\n");
        break;

    default:
        printf("Not a Arithmetic Operator");
        break;
    }
    return 0;
}