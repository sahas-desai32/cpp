#include<stdio.h>

main()
{
	int num, mult=1;
	
	printf("enter a number :-");
	scanf("%d",&num);
	printf("--------------------------------\n");
	
	printf("multiplication table for %d is :-\n",num);
	{
		printf("%d x %d =%d\n",num,mult,(num*mult));
		mult++;
	}
}
