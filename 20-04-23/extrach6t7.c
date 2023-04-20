#include<stdio.h>
main()

{
	int n,a=1,fact;
	
	printf("enter any number :-");
	scanf("%d",&n);
	
	
	while(n<=a)
	{
		fact=fact*a;
		a++;
	}
	
	printf("factorial is %d\n",fact);
}
