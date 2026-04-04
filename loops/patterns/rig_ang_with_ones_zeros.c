#include<stdio.h>

int main()
{
	int r,c,num;
	printf("Enter the num:");
	scanf("%d",&num);
	for(r=1;r<=num;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",(r+c)%2);
		}printf("\n");

	}
}
