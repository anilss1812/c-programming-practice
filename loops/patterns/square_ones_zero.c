#include<stdio.h>
int main()
{
	int r,c,num;
	printf("Enter the value:");
	scanf("%d",&num);
	for(r=1;r<=num;r++)
	{
		for(c=1;c<=num;c++)
		{
			printf("%d ",c%2);
		}
		printf("\n");
	}
}
			
