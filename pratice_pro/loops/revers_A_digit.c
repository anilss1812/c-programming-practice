#include<stdio.h>
int main()
{
	int num,n,rev=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(;num>0;)
	{
		n=num%10;
		//printf("%d",n);
		num/=10;
		rev=10*rev+n;
	}
	printf("%d",rev);
	return 0;
}
