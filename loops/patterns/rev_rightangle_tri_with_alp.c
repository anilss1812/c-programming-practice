#include<stdio.h>
int main()
{
	int i,j,n,alp=65;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++,printf("\n"))
	{
		for(j=1;j <= n - i + 1;j++)
		{
			printf("%c  ",alp);
			alp++;

		}
		alp=65;
	}
	return 0;
}

