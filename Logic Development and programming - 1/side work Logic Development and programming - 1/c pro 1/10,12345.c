#include<stdio.h>
#include<conio.h>
void main()
{
//10)
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
	int i,j,a;
	printf("Enter the number :");
	scanf("%d",&a);
	
	for(i=1; i<=a; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}