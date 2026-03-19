#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter any number:");
	scanf("%d",&x);
	y=x&(1<<31);
	if(y==0)
	{
		
	       printf("%d is postive",x);	
	
	}
	else
	{
		printf("%d is negative",x);
	}
}
