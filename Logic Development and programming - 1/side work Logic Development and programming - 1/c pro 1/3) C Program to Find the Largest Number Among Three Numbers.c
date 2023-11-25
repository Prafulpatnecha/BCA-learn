#include<stdio.h>
#include<conio.h>
void main()
{
	//3)C Program to Find the Largest Number Among Three Numbers
	int a,b,c;
	//enter any value.
	printf("Enter the value :");
	scanf("%d",&a);
	printf("Enter the vlaue :");
	scanf("%d",&b);
	printf("Enter the vlaue :");
	scanf("%d",&c);
	//ladder to fixed value find maximum.
	if(a>b && a>c)
	{
		printf("a is maximum");
	}
	else if(b>c && b>a)
	{
		printf("b is maximum");
	}
	else
	{
		printf("c is maximum");
	}
}
