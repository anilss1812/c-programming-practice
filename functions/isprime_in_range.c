#include <stdio.h>

int isprime(int);

int main()
{
	int min,max;
	printf("Enter the min and max values:");
	scanf("%d%d",&min,&max);
	if(min==1)
	{
		min+=2;
		printf("2,");
	}
	if(min==2)
	{
		printf("2,");
		min++;
	}
	if(!(min%2))
	{
		min++;
	}
	for(;min<=max;min+=2)
	{
		if(isprime(min))
		{
			printf("%d,",min);
		}

	}
			printf("\n");
}
int isprime(int n)
{
	int i;
	for(i=3;i<n;i+=2)
	{
		if(!(n%i))
		{
			return 0;
		}
		return 1;
	}
}

