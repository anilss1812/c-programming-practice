/*
15.
Write a C program to input the age of a person and calculate the ticket price for a movie according to the following conditions:
Age <= 5 or >= 60: Ticket price is free.
Age > 5 and <= 12: Ticket price is $5.00.
Age > 12 and <= 18: Ticket price is $8.00.
Age > 18: Ticket price is $10.00.*/

#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age<=5 || age >=60)
		printf("Your ticket price is Free\n");
	else if(age>5 && age <=12)
		printf("Your ticket price is $5.00\n");
	else if(age >12 && age <=18)
		printf("Your ticket price is $8.00\n");
	else
		printf("Your ticket price is $10.00\n");
	return 0;
}
