#include<stdio.h>

main()
{

		int n;
		printf("press 1 for january\n");
		printf("press 2 for febuary\n");
		printf("press 3 for march\n");
		printf("press 4 for april\n");
		printf("press 5 for may\n");
		printf("press 6 for june\n");
		printf("press 7 for july\n");
		printf("press 8 for augast\n");
		printf("press 9 for saptember\n");
		printf("press 10 for october\n");
		printf("press 11 for november\n");
		printf("press 12 for december\n");
		
		printf("enter your choice");
		scanf("%d",&n);
		
		switch (n)
		{
				case 1:
					printf("january");
					break;
				case 2:
					printf("febuary");
					break;
				case 3:
					printf("march");
					break;
				case 4:
					printf("april");
					break;
				case 5:
					printf("may");
					break;
				case 6:
					printf("june");
					break;
				case 7:
					printf("july");
					break;
				case 8:
					printf("augast");
					break;
				case 9:
					printf("sapteember");
					break;
				case 10:
					printf("october");
					break;
				case 11:
					printf("november");
					break;
				case 12:
					printf("december");
					break;
				default:
					printf("invelid choice");
					break;												
}
}
