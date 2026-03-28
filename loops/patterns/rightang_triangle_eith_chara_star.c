#include<stdio.h>
int main()
{
	int i,j,num,ch;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++,printf("\n"))
	{   

		for(j=1;j<=i;j++)
		{
			if(i%2)
			{
				printf("%c",64+j);
			}
			else
			{
				printf("*");
			}
		
		}
	}
	return 0;
}


