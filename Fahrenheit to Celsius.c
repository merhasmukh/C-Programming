#include<stdio.h>
void main()
{
float calc,fahr;

printf("Enter temparature in farenheit\n");
scanf("%f",&fahr);
calc=(5.0/9.0)*(fahr-32);

printf("Equivalent celcius value is %f\n",calc);
}
