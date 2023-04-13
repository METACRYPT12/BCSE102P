// Pointer Arithmetic

#include <stdio.h>

int main()
{
    int a = 22;
    int *p = &a;
    printf("p = %p\n", p);
    p++;
    printf("p++ = %p\n", p);
    p--;
    printf("p-- = %p\n", p);
    return 0;
}
