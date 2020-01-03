#include<stdio.h>
void main()
{

int x,y,max;

printf("Enter two integers\n");
scanf("%d %d",&x,&y);

max=(x>y)?x:y; //use the ternary operator

printf("Maximun=%d\n",max);
}
