#include<stdio.h>
int main()
{
	int a,b,c,d;
		
	printf("Enter the value of A:-");
	scanf("%d",&a);
	printf("Enter the value of B:-");
	scanf("%d",&b);
	printf("Enter the value of C:-");
	scanf("%d",&c);
	printf("Enter the value of D:-");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A Is Maximum");
			}
			else
			{
				printf("D Is Maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C Is Maximum");
			}
			else
			{
				printf("D Is Maximum");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("B Is Maximum");
			}
			else
			{
				printf("D Is Maximum");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C Is Maximum");
			}
			else
			{
				printf("D Is Maximum");
			}
		}
	}
}
