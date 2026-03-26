#include<stdio.h>
int main()
{
	int num,var,sum=0,sum1=0;
	printf("enter the number:");
	scanf("%d",&num);
	while(num)
	{
		var=num%10;
		if(!(var%2))
		{
			sum+=var;

		}
		else{
			sum1+=var;
		}
		num/=10;
	}
	printf("the sum given even numbers %d\n",sum);
	printf("the sum given odd numbers %d\n",sum1);
	return 0;
}



