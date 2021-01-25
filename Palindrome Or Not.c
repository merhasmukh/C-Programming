#include<stdio.h>
int main(){
int result=0,n,q,rem;
printf("Please Enter The Number:");
scanf("%d",&n);

	q=n;
	while(q!=0)
	{
	rem = q%10;
	result=result*10+rem;
	q=q/10;
	}
	
	if(result == n)
	{
	printf("It Is a Palindrome");
	}
	else
	{
	printf("No,It's not a Palindrome");
	}
	return 0;
}
