// Function without arguments and with return type

#include <stdio.h>
float square();
int main()
{
    printf("Calculate the area of the Square\n\n");
    float area = square();
    printf("The area of the square is: %f", area);
    return 0;
}
float square()
{
    float side = 0.0;
    printf("Enter length of the side in meters: ");
    scanf("%f", &side);
    return (side * side);
}