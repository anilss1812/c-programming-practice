#include<stdio.h>
int main()
{
	int r,c,n;
	printf("Enter the num:");
	scanf("%d",&n);
	for(r=1;r<=n*2-2;r++)
	{
		for(c=1;c<=n/2;c++)
		{
			if(r<=n-1)
			{
				if(r<=n/2+1)
				{
					if(c<=r)
					printf("*");
				}
				else 
				{
					if(c<=n-r)
					{
						printf("*");
					}

				}
			}
			else
			{
				if(r<=n+2)
				{
					if(c<=r-n+1)
					{
						printf("*");
					}
				}

				}
		}printf("\n");
	}
}




			
