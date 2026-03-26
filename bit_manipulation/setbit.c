#include<stdio.h>
int main()
{
	int var,bitpos;
	printf("Enter the decimal number:\n ");
	scanf("%d",&var);
	printf("\n Enter the bit position:\n ");
	scanf("%d",&bitpos);
	printf("\n binary before set bit\n%b ",var);
	var|=(1<<bitpos);
	printf("\n binary after set bit\n%b\n ",var);
	return 0;
}


