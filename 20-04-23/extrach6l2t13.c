#include<stdio.h>
main()
{
	int year;

   year = 2002;

   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      printf("%d is a leap year", year);
    
   else

      printf("%d is not a leap year", year);

   return 0;
}
