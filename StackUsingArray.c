#include<stdio.h>
#define SIZE 5

int pop();
void push();
void display();
int top = -1;
int stack[SIZE];
int choice,i;

int main()
{
		
	
	while(choice != 4)
	{
		printf("\nSelect Your Choice:\n");
		printf("1.Insert The Value in Stack.\n");
		printf("2.Delete The Value from Stack.\n");
		printf("3.Display The Value in Stack.\n");
		printf("4.Exit.\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				break;		
		
		}
		
		
	}
	
}
	
void push(){

	
	if(top==SIZE-1)
		{
			printf("Stack Is Overflow!!\n");
		}
	else
		{
			top=top+1;
			printf("Enter the value to insert in the stack:\n");
			scanf("%d",&stack[top]);
			
		}	
	
	
	}
	
				
int pop(){

	if(top==-1)
	{
		printf("Stack is Underflow!!\n");
	}
	else
	{
		printf("Popped Value is: %d\n",stack[top]);
		top=top-1;
	}
	
}
	

	
void display(){
	
				if(top==-1)
				{	
					printf("Stack Is Empty!!\n");
				}
				else
				{
					printf("Value in stack:\n");
					for(i=top;i>=0;i--)
					  {
					    printf("%d\n",stack[i]);
					  }
				}
			
		
				

	}	
