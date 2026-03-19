#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%5)
		printf("%d\n",i);
	}
	return 0;
}
