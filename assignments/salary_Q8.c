/*Write a C program to input basic salary of an employee and calculate gross salary according to given conditions.
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90% 
Basic Salary >= 20001 : HRA = 30%, DA = 95%*/

#include<stdio.h>
int main()
{
	float bs,hra,da,gs;
	printf("Enter your basic salary:");
	scanf("%f",&bs);
	if(bs<=10000)
	{
		hra=bs*0.20;
		da=bs*0.80;
	}
	else if(bs<=20000)
	{
		hra=bs*0.25;
	       	da=bs*0.90;
	}
	else
	{
		hra= bs*0.30;
	       	da= bs*0.95;
	}
	gs=bs+hra+da;
	printf("Gross salary is %.3f",gs);
	return 0;
}


