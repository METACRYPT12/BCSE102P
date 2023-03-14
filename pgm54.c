// Demonstration of Call by Value

#include <stdio.h>
void add(int num)
{
    num = num + 10;
    printf("Value of num in add() function: %d\n", num);
    return;
}
int main()
{
    int num = 2;
    printf("Value of num before Call by Value: %d\n", num);
    add(num);
    printf("Value of num after Call by Value: %d\n", num);
    return 0;
}