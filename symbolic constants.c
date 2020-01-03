#include<stdio.h>
#define PIE 3.14

void main()
{

float radius,area;

printf("Enter the radius:\n");
scanf("%f",&radius);

area=PIE*radius*radius;

printf("Area of circle: %f\n",area);
}
