#include<stdio.h>
int main()
{
	int r,c,num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(r=1;r<=num;r++)
	{
		for(c=1;c<=num;c++)
		{
			if(r==1 || r==num || c==1 || c==num)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		
		}printf("\n");

	}
	return 0;
}

