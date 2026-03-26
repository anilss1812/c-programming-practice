#include<stdio.h>
int main()
{
	int min,max,i;
	printf("Enter the max and min values :");
	scanf("%d %d",&min,&max);
	if(min==1)
	{
		min+=2;
	}
	else if(min==2)
	{
		printf("%d,",min);
		min++;
	}
	if(min%2==0)
	{
		min++;
	}
	for(min;min<=max;min+=2)
	{
		for(i=3;i<=min;i+=2)
		{
			if(min%i==0)
			{
				break;
			}
		}
		if(i==min)
		{
			printf("%d,",min);
		}
	}
}
