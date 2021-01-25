#include<stdio.h>

int main(){
int i,num,n,sum=0;
printf("Enter the Number:");
scanf("%d",&n);

num=n;
while(n!=0)
	{
		i=n%10;
		n=n/10;
		sum=sum+i;
	}	
printf("Sum Of All Digit Of %d Is %d",num,sum);
return 0;
}
