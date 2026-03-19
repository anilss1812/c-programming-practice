#include<stdio.h>
union tag
{
	float f;
	int  i;
};
int main()
{
	int bit;
	union tag var;
	printf("enter a real data:");
	scanf("%f",&var.f);
	
	for(bit=31;bit>=0;bit--)
		printf("%d",((var.i)>>bit) &1);
printf("\n");
return 0;
}

