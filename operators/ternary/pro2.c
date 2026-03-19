#include<stdio.h>
int main()
{
	int a=5,b=10,x;
	//printf("Enter a and b:");
	//scanf("%d%d",&a,&b);
	x=(a++>b)?a:b;

	printf("%d\n",x);
}

