#include<stdio.h>
int main()
{
	int var;
	printf("Enter the integer:");
	scanf("%d",&var);
	for(int i=sizeof(var)*8-1;i>=0;i--)
	{
		if(var&(1<<i))
		{
			printf("%d",1);
		}
		else
		{
			printf("%d",0);
		}
	}
	printf("\n");
	return 0;
}

