#include<stdio.h>
int main()
{
	int num,i,cnt=0;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num==1)
	{
		printf("%d is not a prime",num);
	}
	else if(num==2)
	{
		printf("%d is a prime",num);
		return 0;
	}
	for(i=3;i<=num;i+=2)
	{
		if(num%i==0)
		{
			break;
		}

	}
	        if(i==num)
		{
			printf("%d is prime no",num);
		}
		else
		{
			printf("%d is non prime",num);
		}
		return 0;
}



