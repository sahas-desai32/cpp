#include<stdio.h>
main()
{
	int unit;
	float amt,total_amt,sur_charge;
	
	printf("enter the unit:-");
	scanf("%d",unit);
	if(unit<=50)
	{
		amt=unit*0.5;
	}
	else if(unit<=150)
	{
	amt=25+((unit-50)*0.75);	
	}
	else if(unit<=250)
	{amt=100+((unit/150)*1.20);}
	else
	{amt=220+((unit-250)*1.50);}
	sur_charge=amt*0.20;
	total_amt=amt+sur_charge;
	
	printf("electricity bill=rs.%2f",total_amt);
}
