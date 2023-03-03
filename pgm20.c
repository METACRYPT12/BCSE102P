// Design a simple calculator using switch-case

#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0, ch = 0;
    printf("Enter 2 Numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Enter one of the following choices: \n1. Addition\n2. Sustraction\n3. Multiplication\n4. Division\n\n");
    scanf(" %d", &ch);
    switch (ch)
    {
    case 1:
        c = a + b;
        printf("Result: %d", c);
        break;

    case 2:
        c = a - b;
        printf("Result: %d", c);
        break;

    case 3:
        c = a * b;
        printf("Result: %d", c);
        break;

    case 4:
        c = (int)(a / b);
        printf("Result: %d", c);
        break;

    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}