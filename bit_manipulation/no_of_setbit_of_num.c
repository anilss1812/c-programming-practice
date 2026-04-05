#include<stdio.h>
int main()
{
	int n,cnt=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		/*if(n&1)
			cnt++;
		n = n>>1;
		*/
		n = n & (n-1);
		cnt++;
	}
		printf("No of set bits are %d",cnt);
}
