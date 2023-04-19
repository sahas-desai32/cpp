#include<stdio.h>

main()
{
	int a,b,c;
	printf("enter value of a :-");
	scanf("%i",&a);
	printf("enter the value of b :-");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("enter the value a :-%d",a);
	printf("enter the valur of a:-%d",b);
}
