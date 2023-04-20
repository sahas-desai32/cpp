#include<stdio.h>
main()
{
	int i=1,n,m,a;
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the tables number");
	scanf("%d",&a);
	while(i<=n)
	{
		printf("\n%d*%d*%d",i,a,i*a);
		i++;
	}
}
