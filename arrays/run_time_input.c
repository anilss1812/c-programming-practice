#include<stdio.h>
int main()
{
	int c[7];
	for(int i=0;i<(sizeof(c)/sizeof(c[0]));i++)
	{
		printf("Enter the numbers:");
		scanf("%d",&c[i]);
	}
	for(int i=0;i<7;i++)
	{
	printf("%d ,",c[i]);
	}
}


