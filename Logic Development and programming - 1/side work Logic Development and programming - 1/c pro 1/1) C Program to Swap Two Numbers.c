#include<stdio.h>
#include<conio.h>
void main()
{
	//1)C Program to Swap Two Numbers
	int a,b,c;
	printf("Enter the value :");
	scanf("%d",&a);
	printf("Enter the value :");
	scanf("%d",&b);
	//exchange the value a & b formula
	c=a;
	a=b;
	b=c;
	printf("%d\n%d",a,c);
}
