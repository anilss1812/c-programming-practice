#include<stdio.h>
#include<math.h>
int main()
{
	int num,temp,sum=0,cnt=0,n;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	for(;temp;temp/=10)
	{
		cnt++;
	}
	for(temp=num;temp;temp/=10)
	{	n=temp%10;
		sum+=pow(n,cnt);
	}
	if(sum==num)
	{
		printf("%d is armstrong num",num);
	}

	else 
		printf("%d is not a armstrong num",num);
	return 0;
}
