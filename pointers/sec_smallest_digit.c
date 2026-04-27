#include<stdio.h>
void sec_highest_check(int*,int*,int);
int main()
{
	int num;
	int min1=9,min2=9;
	printf("Enter the number:");
	scanf("%d",&num);
	sec_highest_check(&min1,&min2,num);
	if(min2 != 9)
	{
	printf("%d",min2);
	}
	else
	{
		printf("All are same");
	}

}

void sec_highest_check(int * min1,int* min2,int num)
{
	
	while(num)
	{
		int digit;
		digit=num%10;
		if(digit < *min1)
		{
			*min2 = *min1;
			*min1 = digit;
		}
		else if(digit < *min2 && *min1 < digit)
		{
			*min2 = digit;
		}
		num /= 10;
	}

}
