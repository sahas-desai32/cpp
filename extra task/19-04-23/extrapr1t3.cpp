#include<stdio.h>
main()
{

	int base_salary,a,b,c,gross_salary;
	printf("please enter the base salary : ");
	scanf("%d",&base_salary);
	a=base_salary*0.10;
	b=base_salary*0.05;
	c=base_salary*0.08;
	printf("hra=%d\n",a);
	printf("da=%d\n",b);
	printf("ta=%d\n",c);
	gross_salary=base_salary+a+b+c;
	printf("gross salary is %d",gross_salary);


}
