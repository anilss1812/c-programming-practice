#include<stdio.h>
int main()
{
	int r,c,n,s;
	printf("Enter thr number:");
	scanf("%d",&n);
	for(r=n;r>=1;r--)
	{
		for(s=n-r;s>0;s--)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			if(c==1||c==r||c==r||r==n){
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}return 0;
}

