#include<stdio.h>
int isprime(int);
int checkPalindrome(int);
int main()
{
	int min,max;
	printf("Enter the max and min values\n");
	scanf("%d%d",&min,&max);
	if(min==1)
	{
		printf("2 ,");
		min+=2;
	}
	else if(min==2)
	{
		printf("2 ,");
		min++;
	}
	else if(!(min%2))
	{
		min++;
	}
	for(;min<=max;min+=2)
	{
		if(isprime(min) && checkPalindrome(min))
		//if(isprime(min))
		{
			printf("%d, ",min);
		}
	}
}

int isprime(int min)
{
	for(int var=3;var<min;var+=2)
	{
		if(!(min%var))
		{
			return 0;
		}
	}
	return 1;
}

int checkPalindrome(int num)
{
	int rev=0,temp;
	temp=num;
	while(temp)
	{
	rev=rev*10+temp%10;
	temp/=10;
	}
	if(rev==num)
		return 1;
	return 0;

}
