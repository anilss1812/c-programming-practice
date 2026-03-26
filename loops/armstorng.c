#include<stdio.h>
#include<math.h>

int main()
{
	int num,temp,cnt=0,sum;
	printf("Enter the number:");
	scanf("%d",&num);
	for(temp=num;temp;temp/=10)
	{
		cnt++;
	}
	for(temp=num;temp;temp/=10)
	{
		sum+=pow(temp%10,cnt);
	}
	if(sum==num){

		printf("%d is armstrong number",num);
	}
	else
	{
		printf("%d is not armstrong number",num);
	}
	return 0;
}

