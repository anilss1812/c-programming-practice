#include<stdio.h>
int main()
{
	int num,var,even,sum=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num)
	{
		var=num%10;
		if(!(var%2))
		{
			sum+=var;

		}
		num/=10;
	}
	printf("the sum given even numbers %d",sum);
	return 0;
}



