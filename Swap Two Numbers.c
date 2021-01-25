#include<stdio.h>
void  main()
{
    int num1,num2,temp;
    printf("Enter The First Number:");
    scanf("%d",&num1);
     printf("Enter The Second Number:");
    scanf("%d",&num2);

    temp=num1;
    num1=num2;
    num2=temp;
    printf("%d %d",num1,num2);
    return 0;
}








