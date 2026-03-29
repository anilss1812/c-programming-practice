#include<stdio.h>
int main()
{
	int i,j,n,nu=1;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
	{
		for(j=1;j <= n - i + 1;j++)
		{
			printf("%d  ",nu++);
		}
	}
	return 0;
}

