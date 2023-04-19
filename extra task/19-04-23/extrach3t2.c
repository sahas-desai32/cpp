#include<stdio.h>
main()
{
	int a,b;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("vlue of a %d\n",a);
	printf("value of b %d",b);
}
