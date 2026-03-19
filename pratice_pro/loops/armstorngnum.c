#include<stdio.h>
#include<math.h>
int main()
{
	int num,last,cnt=0,power=0,temp;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		cnt++;
		num/=10;
	}
	num=temp;
	while(num>0)
	{
		last=num%10;
		//power is always returns double 
		power += (int)pow(last,cnt);
		num /= 10;
	}
	if(power==temp){

		printf("%d is an armstrong number\n",temp);
	        }
	
	else
		printf("%d is not an armstrong number\n",temp);

}
