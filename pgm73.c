// Printing String with pointer

#include <stdio.h>
int main()
{
    char a[100], *pa;

    for (pa = a; (*pa = getchar()) != '$'; pa++)
        ;
    *pa = '\0';
    for (pa = a; *pa; pa++)
        putchar(*pa);
    return 0;
}
