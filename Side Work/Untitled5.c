#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	char c;
			
	for(b=a;a<=b;)
	{
		
		scanf("%d",&a);
		printf("Enter your number last value :");
		scanf("%d",&b);
		printf("Enter the value +,-:");
		scanf(" %c",&c);
		switch(c)
		{
			case '+': printf("%d + %d\n= %d",a,b,a+b);
			break;
			case '-':printf("%d - %d\n= %d",a,b,a-b);
			break;
		}
	}
}