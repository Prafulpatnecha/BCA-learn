#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	char c;
	int q;
	float v,d;
	double e,r;
	b=sizeof(a);
	q=sizeof(c);
	v=sizeof(d);
	e=sizeof(r);
	printf("%d\n",b);
	printf("%d\n",q);
	printf("%f\n",v);
	printf("%lf\n",e);
}