#include<stdio.h>
void sec_highest_check(int*,int*,int);
int main()
{
	int num;
	int max1=-1,max2=-1;
	printf("Enter the number:");
	scanf("%d",&num);
	sec_highest_check(&max1,&max2,num);
	if(max2 != -1)
	{
	printf("%d",max2);
	}
	else
	{
		printf("All are same");
	}

}

void sec_highest_check(int * max1,int* max2,int num)
{
	
	while(num)
	{
		int digit;
		digit=num%10;
		if(digit > *max1)
		{
			*max2 = *max1;
			*max1 = digit;
		}
		else if(digit > *max2 && *max1 > digit)
		{
			*max2 = digit;
		}
		num /= 10;
	}

}
