#include<stdio.h>

int swap();

int main(){

	int x=10;
	int y=20;
	
	swap(&x,&y);
	
	printf("x = %d y= %d\n",x,y);
	

	return 0;


}

int swap(int *a,int *b){

	 int temp;
	
	temp= *a;
	*a = *b;
	*b= temp;
	

	

	


}
