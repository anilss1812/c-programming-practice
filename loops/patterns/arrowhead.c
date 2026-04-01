#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}printf("\n");
	}
	for(i=1;i<=num-1;i++){
		for(j=num-i;j>0;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
