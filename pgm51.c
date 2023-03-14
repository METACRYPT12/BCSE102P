// Area of the circle using user defined function

#include <stdio.h>
float area(float r)
{
    float ar = 3.14 * r * r;
    return ar;
}
int main()
{
    float radius = 0.0, a = 0.0;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    a = area(radius);
    printf("Area of the circle is: ", a);
    return 0;
}