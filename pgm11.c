// Print the numbers which are divisible by 6

#include <stdio.h>
int main()
{
    int i = 1;
    while (i < 101)
    {
        if (i % 6 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}