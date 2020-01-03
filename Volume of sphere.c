#include<stdio.h>
#define PIE 3.14
void main()
{
float radius,volume,area;

printf("Enter the radius of sphere\n");
scanf("%f",&radius);

/*compute area and volume*/

area=4*PIE*radius*radius;
volume=(4*PIE*radius*radius*radius)/3;

printf("Area =%f Volume =%f\n",area,volume);
}
