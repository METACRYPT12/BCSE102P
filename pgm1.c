// Find the area of the Circle

#include <stdio.h>
int main()
{
    float r, a;
    printf("Enter radius of Circle: ");
    scanf("%f", &r);
    a = 3.14 * r * r;
    printf("Area of Circle: %f", a);
    return 0;
}