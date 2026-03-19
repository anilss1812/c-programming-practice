#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=5;i<=num;i+=5)
	{
		printf("5 multiples are %d..",i);
	}
	return 0;
}
