#include<stdio.h>
int main()
{
	int i,num,cnt=0,pair=0,intial;
	printf("Enter the number:");
        scanf("%d",&num);
	intial=sizeof(num)*8-1;
	for(i=intial;i>=0;i--)
	{
		(num&(1<<i))?printf("1"):printf("0");
	}
	for(i=intial;i>=0;i--)
	{
		if(num&(1<<i))
		{
			cnt++;
			if(cnt==2)
			{
				pair++;
				cnt=0;
			}
		}
		else
		{
			cnt=0;
		}
	}
	printf("\nThe no of one's pairs are %d\n",pair); 
	return 0;

}

					
