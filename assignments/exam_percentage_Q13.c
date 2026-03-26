/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
Calculate percentage and grade according to following: Percentage >= 90% : Grade A 
Percentage >= 80% : Grade B 
Percentage >= 70% : Grade C 
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/

#include<stdio.h>
int main()
{
	float phy,math,bio,chem,comp,sum,percentage,marks;
	printf("Enter marks of physics:");
	scanf("%f",&phy);
	printf("Enter marks of chemistry:");
	scanf("%f",&chem);
	printf("Enter marks of biology:");
	scanf("%f",&bio);
	printf("Enter marks of maths:");
	scanf("%f",&math);
	printf("Enter marks of computers:");
	scanf("%f",&comp);
	sum = phy+math+chem+bio+comp;
	percentage = (sum/500)*100;
	//printf("%.2f",percentage);

	if(percentage < 40)
		printf("your percentage is %.0f and grade is F \n",percentage);
	else if(percentage >= 40 && percentage < 50)

		printf("your percentage is %.0f and grade is E \n",percentage);

	else if(percentage >= 50 && percentage < 60)

		printf("your percentage is %.0f and grade is D \n",percentage);

	else if(percentage >= 60 && percentage < 70)

		printf("your percentage is %.0f and grade is C \n",percentage);
	else if(percentage >= 70 && percentage < 80)
	
		printf("your percentage is %.0f and grade is B \n",percentage);

	else if(percentage >= 80 && percentage < 90)
		printf("your percentage is %.0f and grade is A \n",percentage);
	else

		printf("your percentage is %.0f and grade is A+ \n",percentage);

	return 0;
}

