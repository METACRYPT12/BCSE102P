// Tower of Hanoi

#include <stdio.h>

void toH(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("Moved disk %d from rod %c to rod %c\n", n, from, to);
        return;
    }
    toH(n - 1, from, aux, to);
    printf("Moved disk %d from rod %c to rod %c\n", n, from, to);
    toH(n - 1, aux, to, from);
    return;
}

int main()
{
    toH(5, 'A', 'C', 'B');
    return 0;
}
