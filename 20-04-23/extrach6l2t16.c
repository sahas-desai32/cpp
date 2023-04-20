#include<stdio.h>

int main()
{
  int i,n,m,a;
  printf("\nEnter any number:");
  scanf("%d",&n);
  printf("\nEnter the table number:");
  scanf("%d",&a);
  for(i=1;i<=n;i++)
  {
    printf("\n%d*%d=%d",i,a,i*a);
  }
  return 0;
}
