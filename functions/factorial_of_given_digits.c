#include<stdio.h>

int fact(int);
int main()
{
	int num,fat;
	printf("Enter the number:");
	scanf("%d",&num);
	fat=fact(num);
	printf("The factorial of a number is:%d\n",fat);
}
int fact(int a)
{
	int s=1;
	while(a)
	{
		s *= a%10;
		a /= 10;
	}
	return s;
}

