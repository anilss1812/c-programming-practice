#include<stdio.h>
int main()
{
	int r,c,n,s;
	printf("Enter thr number:");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(s=1;s<=n-r;s++)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			if(c==1||c==r||r==n)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}return 0;
}

