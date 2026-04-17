/*Write a function to find the sum of all numbers within a range [min, max] where all the digits are even.
🔹Input:
 min = 10, max= 50
🔹Output:
Sum = 20 + 22 + 24 + 26 + 28 + 40 + 42 + 44 + 46 + 48 = 340*/ 

#include<stdio.h>

void check_even(int,int);
int even_digit(int);

int main()
{
	int min,max;
	printf("Enter the min and max values:");
	scanf("%d%d",&min,&max);
	check_even(min,max);
}

void check_even(int min,int max)
{
	int res,sum=0;
	while(min<=max)
	{
		if(!(min%2))
		{
			res = even_digit(min);
			if(res)
			{
				sum += res;
			}
		}
		min++;
	}
	printf("%d",sum);
}

int even_digit(int num)
{
	int dig,cnt=0,temp;
	temp=num;
	while(num)
	{
		dig=num%10;
		if(!(dig%2))
		{
			cnt++;
		}
		num /= 10;
	}
	if(cnt==2)
	{
		return temp;
	}
}

