#include<stdio.h>


int main(){
int no,rem,var,binary=0,i=1;

printf("Enter The Decimal number:");
scanf("%d",&no);

	var=no;
	while(no!=0)
	{
		rem=no%2;
		no=no/2;
		binary=binary+(rem*i);
		i=i*10;
	}
printf("Binary Number Of %d Is %d",var,binary);

return 0 ;
}
