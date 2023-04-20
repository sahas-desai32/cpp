#include<stdio.h>

main()

{
	int a=1,n,fact;
	
	printf("enter any number :-");
	scanf("%d",&n);
	
	
	do
	{
		fact=fact*a;
		a++;
		printf("factorial is %d\n",fact);
	}
	while(a<=n);
}

