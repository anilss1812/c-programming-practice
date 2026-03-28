#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++,printf("\n"))
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	}
	return 0;
}

