#include <stdio.h>

int isprime(int);
int isdigits(int);

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
		//puts("in loop f");
		if(isdigits(min)&&isprime(min))
		{
			printf("%d,",min);
		}

	}
			printf("\n");
}
int isprime(int n)
{
	int i;
	//puts("prime");
	for(i=3;i<n;i+=2)
	{
		if(!(n%i))
		{
			return 0;
		}
	  
        }
	return 1;
	
}

int isdigits(int val)
{
//	puts("in loop d");
	if(((val%10)==3) || ((val%10)==7))
	{
//	puts("in loop");
		return 1;
	}
	return 0;
}

