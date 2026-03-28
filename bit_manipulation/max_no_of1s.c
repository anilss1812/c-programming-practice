#include<stdio.h>
int main()
{
	int i,num,cnt=0,max=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=sizeof(num)*8-1;i>=0;i--)
	{
		if(num&(1<<i))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}

	}
	for(i=sizeof(num)*8-1;i>=0;i--)
	{
		if(num&(1<<i))
		{
			cnt++;
		}
		else
		{       if(cnt>max)
			{
				max=cnt;
			}cnt=0;
		}
	}
	if(cnt>max)
	{      
		max=cnt;
	}
	
		printf("\nThe max number of one's for given bin num is %d\n",max);
}
