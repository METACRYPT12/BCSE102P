// Convert Fahrenheit to Celsius

#include <stdio.h>
int main()
{
    float f, c;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * (5.0 / 9.0);
    printf("Temperature is Celsius: %.2f", c);
    return 0;
}