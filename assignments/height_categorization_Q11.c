/*
11.
Height Categorization
Write a C program to accept the height of a person in centimeters and categorize the person according to their height.
Height < 150 -------→ Dwarf
Height between 150 to 165 ------→ Average height
Height >= 165 ----→ Tall
*/

#include<stdio.h>
int main()
{
	int heg;
	printf("Enter your height in cm:");
	scanf("%d",&heg);
	if(heg<150)
		printf("Dwarf");
	else if(heg >=150 && heg<165)
		printf("Average height\n");
	else
		printf("Tail\n");
	return 0;
}

