#include<stdio.h>
#define SIZE 5

int inqueue();
int dequeue();
int display();
int front = -1;
int rear = -1;
int queue[SIZE];
int choice;

int main(){


	while(choice != 4)
	{
		printf("Select Your Choice:\n");
		printf("1.Insert The Value in Queue.\n");
		printf("2.Delete The Value from Queue.\n");
		printf("3.Display The Value in Queue.\n");
		printf("4.Exit.\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				inqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				break;		
		
		}
		
		
	}



}

int inqueue() {


	if(rear==SIZE-1)
	{
		printf("Queue Is Full....!!!\n");
	}
	else
	{
		rear=rear+1;
		printf("Enter the Value to insert in queue:\n");
		scanf("%d",&queue[rear]);
		if(front==-1)
		{
			front = 0;
		}
		
	}


}

int dequeue(){

			if(front == -1)
			{
				printf("Queue Is Empty..!!\n");
			}
			else
			{
				printf(" Deleted : %d\n",queue[front]);
				if(front == rear)
				{
					front = -1;
					rear = -1;
				}
				else
				{	
					queue[front]=0;
					front=front+1;
						
				}
					
			}
			display();

}

int display(){

	if(front == -1)
	{
		printf("Queue Is Empty..!!\n");
	
	}
	else
	{
		for(int i=front;i<=rear ;i++)
		{
			printf("Values in Queue is :%d\n",queue[i]);
		}
	
	}



}
