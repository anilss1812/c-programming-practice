#include<stdio.h>
int main()
{
	int i=1,n,prod=1;
	printf("Enter two numbers num1:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		prod=prod*i;
	        i++;	
	}
	printf("%d\n",prod);
	return 0;
}
