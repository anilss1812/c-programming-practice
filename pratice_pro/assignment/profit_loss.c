/*Write a program to enter the cost price and selling price of a product and calculate the
profit or loss of a product.*/
#include<stdio.h>
int main()
{
	int sp,cp;
	printf("Enter a cost price:");
	scanf("%d",&cp);
	printf("Enter a selling price:");
	scanf("%d",&sp);
	if(sp>cp)
	
		printf("%d is your profit",sp-cp);

	else
		printf("%d is your loss",cp-sp);

	return 0;

}
