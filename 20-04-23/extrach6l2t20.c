#include<stdio.h>
int main()
{
  int i=1,n,m,a;
  printf("\nEnter the limit:");
  scanf("%d",&n);
  printf("\nEnter the table's number:");
  scanf("%d",&a);
  while(i<=n)
  {
    printf("\n%d*%d=%d",i,a,i*a);
    i++;
  }
  return 0;
}
