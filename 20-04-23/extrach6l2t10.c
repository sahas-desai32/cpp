#include<stdio.h>
int main()
{
	int i,num;
	printf("enter any number");
	scanf("%d",&num);
	if(num >0)
    {
        printf("List of Natural Numbers from 1 to %d are \n", num);
        for(i = 1; i <= num; i++)
        {
            printf("%d\n ", i);
        }
    }
    else
    {
        printf("Enter Valid number\n");
    }
    return 0;
}



    

