#include<stdio.h>

int fun();//function prototype....

int main(){

	int m=20,n=90,sum;
	fun(m,n); //actual parameters... & Call By Value
	printf("m=%d ,n=%d",m,n);
	
	

}

int fun(int a,int b) //formal parameters....
{
a=45;
b=85;

}
