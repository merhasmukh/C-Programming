#include<stdio.h>
void main()
{
float min,max;
int i;

printf("enter two float value\n");
scanf("%f %f",&min,&max);

printf("Integers between %f and %f \n",min,max);

i=(int)(min+1);

while(i<=(int)max)
{
printf("%d \n",i);
i +=1;
}
 printf("\n");
}				
