#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i=0;
	char op;
	printf("Enter your operation:");
	scanf("%d",&op);
	printf("Enter your number:");
	scanf("%d",&a,&op);
	while (a)
	{	
		printf("%d",i);
		i++;
	}
}