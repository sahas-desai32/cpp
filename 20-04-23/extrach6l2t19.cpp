#include<stdio.h>
void main()
{
    int n,i=1,f=1;
    
     
    printf("\n Enter The Number:");
    scanf("%d",&n);
     
    
    while(i<=n)
    {
        f=f*i;
        i++;
    }
     
    printf("\n The Factorial of %d is %d",n,f);
}
