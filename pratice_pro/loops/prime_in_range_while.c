#include<stdio.h>
int main()
{
 	int min, max,i=1,cnt=0;
	printf("Enter min number:");
 	scanf("%d",&min);
	printf("Enter min number:");
 	scanf("%d",&max);
	while(min<=max)
	{
		while(i<=min)
		{
			if(min%i==0)
			{
				cnt++;
			}
		i++;
		}
		if(cnt==2)
		{
			printf("%d\n",min);
		}
		i=1;
		min++;
		cnt=0;
	}
	return 0;
}
