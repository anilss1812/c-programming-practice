/*18.
Write a C program to input the number of minutes used and calculate the total cost of a mobile plan according to the given conditions:
For the first 100 minutes, Rs.0.50 per minute.
For the next 150 minutes, Rs.0.40 per minute.
For minutes above 250, Rs.0.30 per minute.
Add an additional flat fee of Rs.5.00 to the final cost.*/

#include<stdio.h>
int main()
{
	float min,bill;
	printf("Enter the minutes:");
	scanf("%f",&min);
	if(min<=100)
	{
		bill=0.50*min;
	}
	else if(min <= 250)
	{
		bill=50+(min-100)*0.40;
	}
	else
	{
		bill = 110+(min-250)*0.30;

	}
	bill = bill + (bill*5.00);
	printf("The moblie plan %.1f is..%.1f\n",min,bill);
}



