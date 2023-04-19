#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter the value of a:-");
	scanf("%d",&a);
	printf("enter the value of b:-");
	scanf("%d",&b);
	printf("enter the value of c:-");
	scanf("%d",&c);
	printf("enter the value of d:-");
	scanf("%d",&d);
	printf("enter the valuen of e:-");
	scanf("%d",&e);

	  (a>b)?
	    (a>c)?
	      (a>d)?
		(a>e)?printf("a is maximum")
		     :printf("e is maximum")
		     :printf("d is maximum")
		     :printf("c is maximum")
		     :
		     (b>c)?
		      (b>d)?
		       (b>e)?printf("c is maximum")
			    :printf("d is maximum")
			    :printf("c is maximum")
			    :
			    (c>d)?
			    (c>e)?printf("d is maximum")
				 :printf("e is maximum")
				 :
				 (d>e)?printf("e is maximum")
				      :printf("d is amximum");

}
