#include<stdio.h>

int main()
{
	int num,fh=-1,sh=-1;
	printf("Enter the numbers:");
	scanf("%d",&num);
	while(num)
	{
		int digit;
		digit = num%10;
		if(fh<digit)
		{
			sh = fh;
			fh = digit;
		}
		else if(digit > sh && digit < fh)
		{
			sh = digit;
		}
		num /= 10;
				
	}
	printf("%d \n",sh);

}
