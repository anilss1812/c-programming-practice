#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter two numbers num1:");
	scanf("%d",&n);
        int cnt=n;
	while(i<=2*n)
	{
		if (i<=n)
		{
			printf("%d\n",i);
			
		}
		else
		{
			
			printf("%d\n",cnt);
	        	cnt--;
		}
            i++;
	}
	
	return 0;
}
