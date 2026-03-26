/*Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition: 
 For first 50 units Rs. 0.50/unit
 For next 100 units Rs. 0.75/unit 
 For next 100 units Rs. 1.20/unit 
 For unit above 250 Rs. 1.50/unit 
 An additional surcharge of 20% is added to the bill.*/

#include<stdio.h>
int main()
{
	float units,bill;
	printf("Enter the units of your electricity :");
	scanf("%f",&units);
	if(units<50)
	{
		bill=0.50*units;
	}
	else if(units <= 150)
	{
		bill=25+(units-50)*0.75;
	}
	else if(units <= 250)
	{
		bill = 100+(units-150)*1.20;
	}
	else
	{
		bill = 220+(units-250)*1.50;

	}
	bill = bill + (bill*0.20);
	printf("The Electricity bill for %.1f is..%.1f\n",units,bill);
}



