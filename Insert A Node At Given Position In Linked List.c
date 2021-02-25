#include<stdio.h>
#include<stdlib.h>

int Insert_At_Position();
void display();

struct node {


	int value;
	struct node *next;
	

}*head,*temp,*ptr;
int main(){

	int choice;
	
	while(choice !=3 )
	{
		
		printf("\nEnter Your Choice..!!\n\n");
		printf("1. Insert at Position..\n");
		printf("2. display list.\n");
		printf("3. Exit.\n");
		scanf("%d",&choice);
		
		
		
		switch(choice)
		{
			
			case 1:
				Insert_At_Position();
				break;
			case 2:
				display();
				break;
			case 3:
				break;
			default:
				printf("Invalid Choice...!!!!");
				break;		
		}
	
	
	
	}

	
	

}

int  Insert_At_Position()
{
	int position,i,data;
	 printf("Enter the Position:");
	 scanf("%d",&position);
	 if(position < 0)
	 {
		printf("Invalid Position\n");
	 }
	 else if(position == 0)
	 {
	 	struct node *newnode;
		 newnode =(struct node*)malloc(sizeof(struct node));
		 printf("Enter the Data:");
		 scanf("%d",&data);
		 newnode->value=data;
		 newnode->next=NULL;
		 head=newnode;
		 temp = newnode;
	 
	 }
	 else
	 {	
		temp = head;
		 int i = 1;
        while(temp != NULL)
        {
            if(i == position)
            {
				struct node *newnode;
				 newnode =(struct node*)malloc(sizeof(struct node));
				 printf("Enter the Data:");
				 scanf("%d",&data);
				 newnode->value=data;
                newnode->next = temp->next;
                temp->next = newnode;
                break;
            }
            temp = temp->next;
            i++;
        }
		
		 
	 }
}
    

void display(){


	if(head == NULL)
	{
		printf("Linked List is Empty..!!!\n");
	}
	else
	{
		for(ptr=head; ptr->next != NULL;ptr=ptr->next)
		{
			printf("Values In Linked List Is : %d \n",ptr->value);
		}
		printf("Values In Linked List Is : %d \n",ptr->value);
	}
	


}
