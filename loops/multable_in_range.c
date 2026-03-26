#include<stdio.h>
int main()
{
	int i,j,min,max,n,s;
	printf("Enter the min and max values:");
	scanf("%d %d",&min,&max);
	printf("Enter the the stets size:");
	scanf("%d",&s);
	for(i=min;i<=max;i++)
	{
		for(j=1;j<=s;j++)
		{
			n=i*j;
			printf("%d\t",n);
		}
		printf("\n");
	}
	return 0;
}
