#include<stdio.h>
main()
{
	char n;
	printf("press a for monday\n");
	printf("press b for tuseday\n");
	printf("press c for wendesday\n");
	printf("press d for thurseday\n");
	printf("press e for friday\n");
	printf("press f for saturday\n");
	printf("press g for sunday\n");
	
	printf("enter your choice\n");
	scanf("%c",&n);
	
	switch(n)
	{
		
		case 'a' :
			printf("monday");
			break;
		
		case 'b' :
			printf("tuseday");
			break;
			
		case 'c' :
			printf("wendesday");
			break;
			
		case 'd' :
			printf("thuseday");
			break;
			
		case 'e':
			printf("friday");
			break;
			
		case 'f':
			printf("saturday");
			break;
			
		case 'g':	
			printf("sunday");
			break;
			
			default :
			printf("invalid choice");		
				
	}
	
}
