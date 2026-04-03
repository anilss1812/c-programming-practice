#include<stdio.h>
int isprime(int);

int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(isprime(num))
	{
		printf("%d is the prime number\n",num);
	}
	else
	{
		printf("%d is the non prime\n",num);
	}

}

int isprime(int n)
{
	int i,j;
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else if(!(n%2))
		return 0;
	for(i=3;i<n;i+=2)
	{
		if(!(n%i))
		{
			return 0;
		}
		return 1;
	}

}
