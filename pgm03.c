// Find the volume of the Sphere

#include <stdio.h>
int main()
{
    float r, v;
    printf("Enter radius of Sphere: ");
    scanf("%f", &r);
    v = (4.0 / 3.0) * 3.14 * r * r * r;
    printf("Volume of Sphere of Radius %f is: %f", r, v);
    return 0;
}