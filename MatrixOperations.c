#include<stdio.h>
int subtraction();
int addition();
int multiplication();
int display();

	int i,j,k,sum=0,mul=0,sub;
	int m1rows,m1column,m2rows,m2column;
	int m1[50][50];
	int m2[50][50];
	
int main(){
	
	
	printf("Enter the numner of rows and column of m1:\n");
	scanf("%d %d",&m1rows,&m1column);

	printf("enter the elements of m1:\n");
	for(i=0;i<m1rows;i++)
		{
			for(j=0;j<m1column;j++)
			{
				scanf("%d",&m1[i][j]);
				
			}
			printf("\n");
		
		}
		
		printf("Enter the numner of rows and column of m2:\n");
		scanf("%d %d",&m2rows,&m2column);

		printf("enter the elements of m2:\n");
		for(i=0;i<m2rows;i++)
			{
				for(j=0;j<m2column;j++)
				{
					scanf("%d",&m2[i][j]);
				}
				printf("\n");
		
			}
			
			
		display();
		addition();
		subtraction();
		multiplication();
		
	
	
}

int addition(){


	printf("Sum Of M1 And M2:\n");
	if(m1rows==m2rows && m1column==m2column)
		{	
		for(i=0;i<m1rows;i++)
			{
				for(j=0;j<m1column;j++)
				{
					sum = m1[i][j]+m2[i][j];
					printf("%d ",sum);
				}
				printf("\n");
			
			}
		}
	else
		{
		printf("Not Possible..!!\n");
		}	
		
	}

int subtraction(){


	printf("subtraction Of M1 And M2:\n");
	if(m1rows==m2rows && m1column==m2column)
		{	
		for(i=0;i<m1rows;i++)
			{
				for(j=0;j<m1column;j++)
				{
					sub = m1[i][j]-m2[i][j];
					printf("%d ",sub);
				}
				printf("\n");
			
			}
		}
	else
		{
		printf("Not Possible..!!\n");
		}	
		
	}

int multiplication(){
	
	printf("Multiplication Of M1 And M2:\n");
	if(m1column==m2rows)
	{
		
		for(i=0;i<m1rows;i++)
			{
				for(j=0;j<m2column;j++)
				{
					mul=0;
					for(k=0;k<m1column;k++)
					{
						mul += (m1[i][k]*m2[k][j]);
					}
					printf("%d  ",mul);
				}
			printf("\n");
		
			}
		}
	else
	{
		printf("Not Possible..!!\n");
	}	
		
	
	
		
}
int display(){
	

	printf("Display M1:\n");
	for(i=0;i<m1rows;i++)
		{
			for(j=0;j<m1column;j++)
			{
				printf("%d ",m1[i][j]);
				
			}
			printf("\n");
		
		}
	
	printf("Display M2:\n");
	for(i=0;i<m2rows;i++)
		{
			for(j=0;j<m2column;j++)
			{
				printf("%d ",m2[i][j]);
				
			}
			printf("\n");
		
		}	
		
	
}
