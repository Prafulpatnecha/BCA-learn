#include<stdio.h>
#include<conio.h>
main()
{
	//4)C Program to Check Leap Year
	int a,b;
	printf("(value for ex.2000 to 3000 year for leap)\n");
	printf("Enter the value of year :");
	scanf("%d",&a);
	printf("Enter the value of time of leaps :");
	scanf("%d",&b);
	for(a; a<=b;)
	{
		printf("%d,",a);
		a+=4;
	}
}
