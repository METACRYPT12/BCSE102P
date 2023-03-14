// Volume of the sphere using user defined function

#include <stdio.h>
float volume(float r)
{
    float vol = (4.0 / 3.0) * 3.14 * r * r * r;
    return vol;
}
int main()
{
    float radius = 0.0, v = 0.0;
    printf("Enter radius of the sphere: ");
    scanf("%f", &radius);
    v = volume(radius);
    printf("Volume of the sphere is: ", v);
    return 0;
}