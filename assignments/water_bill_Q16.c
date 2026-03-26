/*Write a C program to input the usage in gallons and calculate the total water bill according to the given conditions:
For the first 50 gallons, Rs1.00 per gallon.
For the next 100 gallons, Rs.1.50 per gallon.
For the next 100 gallons, Rs.2.00 per gallon.
For gallons above 250, Rs.2.50 per gallon.
Add an additional 15% surcharge to the final bill.*/
#include<stdio.h>
int main()
{
	float gallon,bill;
	printf("Enter how many gallon are used:");
	scanf("%f",&gallon);
	if(gallon<=50)
		bill = 1*gallon;
	else if(gallon > 50 && gallon <150)
		bill = 50+(gallon-50)*1.50;
	else if(gallon >= 150 && gallon <250)
		bill = 175+(gallon-150)*2.00;
	else
		bill = 275+(gallon-250)*2.50;
	bill = bill + bill*0.15;
	printf(" Is your bill %.2f",bill);

	return 0;
}

