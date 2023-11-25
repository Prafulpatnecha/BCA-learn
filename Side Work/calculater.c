#include<stdio.h>
#include<conio.h>

main()
{
	char op;
	int a,b;
	
	printf("Enter the value A :");
	scanf("%d",&a);
	printf("+,-,*,/ :");
	scanf(" %c",&op);
	printf("Enter the value B :");
	scanf("%d",&b);
	
	switch(op)
	{
		case '+':
			printf("%d ",a+b);
			break;
			
		case '-':
			printf("%d ",a-b);
			break;
			
		case '*':
			printf("%d ",a*b);
			break;
			
		case '/':
			printf("%d ",a/b);
			break;
	}
}