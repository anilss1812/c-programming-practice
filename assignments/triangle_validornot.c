/*Write a C program to check whether a triangle is valid or not if angles are given using if else.
•
Input all three angles of triangle in some variable say angle1, angle2 and angle3.
•
Find sum of all three angles ,if sum is equals to 180 then it is valid otherwise not a valid
•
In addition, make sure angles are greater than 0*/

#include<stdio.h>
int main()
{
	int ang1,ang2,ang3,sum;
	printf("Enter angle1:");
	scanf("%d",&ang1);
	printf("Enter angle2:");
	scanf("%d",&ang2);
	printf("Enter angle3:");
	scanf("%d",&ang3);
	sum = ang1+ang2+ang3;
	if(ang1>0 && ang2>0 && ang3>0 && sum==180)

			printf("your Triangle is valid\n");
	else
			printf("your Triangle is notvalid\n");
	return 0;

}
