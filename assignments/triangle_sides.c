/*Write a C program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle using if else.
•
A triangle is said Equilateral Triangle, if all its sides are equal. If a, b, c are three sides of triangle. Then, the triangle is equilateral only
if a == b == c.
•
A triangle is said Isosceles Triangle, if its two sides are equal. If a, b, c are three sides of triangle. Then, the triangle is isosceles if either a == b or a == c or b == c.
•
A triangle is said Scalene Triangle, if none of its sides are equal.*/

#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("Enter side1,side2,side3:");
	scanf("%d%d%d",&side1,&side2,&side3);
	if(side1==side2==side3)
		printf("The triangle is equilateral\n");
	else if(side1==side2 || side1==side3 || side2==side3)
		printf("The triangle is isosceles");
	else 
		printf("The triangle is scalene");
	return 0;
}
