#include <stdio.h>
void main()
{
    float r, a;
    const float pi = 3.14;
    printf("\nEnter the radius: ");
    scanf("%f", &r); // Use %f for float
    a = pi * r * r;
    printf("Area of circle = %f\n", a);
}
