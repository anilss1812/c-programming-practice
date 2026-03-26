#include<stdio.h>
int main()
{
	int var,cnt=0;
	printf("Enter the integer:");
	scanf("%d",&var);
	for(int i=sizeof(var)*8-1;i>=0;i--)
	{
		if(var&(1<<i))
		{
			cnt++;
		}
		
	}
	printf("The binary number of give num is:%b\n",var);
	printf("Num of one's in binary num is:%d\n",cnt);

	return 0;
}

