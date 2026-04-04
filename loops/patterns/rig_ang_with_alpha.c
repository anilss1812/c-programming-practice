#include<stdio.h>
int main()
{
	int r,c,num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(r=1;r<=num;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(r%2)
			{
				if(c%2)
				{
					printf("%c",96+c);
				}
				else
				{
					printf("%c",64+c);
				}
			}
			if(!(r%2))
			{
				if(c%2)
				{
					printf("%c",64+c);
				}
				else
					printf("%c",96+c);
			}
		}printf("\n");
	}
}
