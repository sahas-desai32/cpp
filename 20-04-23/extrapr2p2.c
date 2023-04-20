#include<stdio.h>
main()
{
	char a;
	printf("enter the value of a:-");
	scanf("%c",&a);
	if(a>='0' && a<='9')
	{
		printf("your value is dizit");
	}
	else if(a>='a' && a<='z')
	{
		printf("your value is small alaphabet");
	}
	else if(a>='A' && a<='Z')
	{
		printf("your value is capitaal alaphabet");
	}
	else
	{
		printf("your value is special characther");
	}
}
