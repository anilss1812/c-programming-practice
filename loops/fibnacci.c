#include<stdio.h>

int main()
{
	int n,n1,n2,n3;
	printf("Enter the value:");
	scanf("%d",&n);
	n1=0;
	n2=1;
	for(int i=1;i<=n;i++)
	{
		printf("%d",n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	return 0;
}
