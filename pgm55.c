// Demonstration of Call by Reference

#include <stdio.h>
void add(int *);
int main()
{
    int num = 2;
    printf("Value of num before Call by Reference: %d\n", num);
    add(&num);
    printf("Value of num after Call by Reference: %d\n", num);
    return 0;
}
void add(int *n)
{
    *n = *n + 10;
    printf("Value of num in add() function: %d\n", *n);
    return;
}