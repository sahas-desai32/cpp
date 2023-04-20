#include<stdio.h>

void main()
{
    int n,i,f=1;
     
    printf("\n Enter The Number:");
    scanf("%d",&n);
     
    
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
     
    printf("\n The Factorial of %d is %d",n,f);
    
}
