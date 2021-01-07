#include<stdio.h>

int main(){

	int i,j,rows,n=1;
	printf("Enter the nubers of terms::");
	scanf("%d",&rows);
	
	
	for(i=1;i<=rows;i++){
	
		for(j=1;j<=i;j++){
			
			printf("%d",n);
			n++;
		
		}
		printf("\n");
	
	
	}
	return 0;
	
}	
