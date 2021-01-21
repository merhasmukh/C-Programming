#include<stdio.h>
#define SIZE  12
int LinearSearch();
int main(){
	int target,i;
	int a[12]={1,5,8,9,6,7,15,45,48,56,12,14};
	printf("Enter the value to serach: ");
	scanf("%d" ,&target);
	i = LinearSearch(a,SIZE,target);
	if(i==-1)
	{
		printf("Value Not FOund !!!");	
	}
	else
	{
	printf("Value Found at index %d and value is :%d\n",i,a[i]);
	}


}

int LinearSearch(int *a,int size,int target){
	int index = 0;
	for(index=0;index<size;index++)
	{
		if(a[index] ==target)
		{
			return index;
		}
	}
	return -1;

}
