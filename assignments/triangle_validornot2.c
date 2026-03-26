/*Write a C program to input side of a triangle and check whether triangle is valid or not using if else.
•
Input sides of a triangle from user. Store them in some variable say side1, side2 and side1.
•
Given triangle is valid if side1 + side2 > side3 and side1 + side3 > side2 and side2 + side3 > side1.*/

#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("Enter side1,2,3:");
	scanf("%d%d%d",&side1,&side2,&side3);
	if(side1+side2 > side3 && side1+side3 >side2 && side2+side3>side1)
	{
		printf("Triangle is valid");
	}
	else 
		printf("Triangle is not valid");

	return 0;
}
