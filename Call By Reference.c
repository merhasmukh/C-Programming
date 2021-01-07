#include<stdio.h>

int fun();//function prototype....

int main(){

	int m=20,n=90,sum;
	fun(&m,&n); //actual parameters... && Call By Reference..
	printf("m=%d ,n=%d",m,n);
	
	

}

int fun(int *ptr1,int *ptr2) //formal parameters....
{
*ptr2=45;
*ptr1=85;

}
