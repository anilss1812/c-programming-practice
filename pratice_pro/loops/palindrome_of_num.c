//Check palindrome number
#include<stdio.h>
int main()
{
	int num,temp,rev=0,last;
	printf("Enter the number:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		last = num%10;
		num /= 10;
		rev=10*rev+last;
	}
	if(temp-rev == 0)
		printf("%d is palindrome",temp);
	else
		printf("%d is not palindrome",rev);
	return 0;
}
