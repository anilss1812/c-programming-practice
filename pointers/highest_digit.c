#include<stdio.h>
int highest(int*,int); 
int main()
{
	int num,res=0;
	printf("%p",&num);
	printf("Enter the number:");
	scanf("%d",&num);
	highest(&res,num);
	printf("%d",res);
}
int highest(int* resp,int n)
{
	int max=0;
	while(n)
	{
		n%=10;
		if(n>*resp)
		{
			*resp=n;
		}
		n/=10;
	}
	
}

