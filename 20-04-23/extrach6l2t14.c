#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("enter any numbers");
	 scanf("%d", &n);

    for (i = 1; i <= n; ++i) 
    {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}

