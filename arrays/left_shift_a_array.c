#include<stdio.h>
void input(int*,int);
void shift(int*,int,int);
void print(int*,int);
int main()
{
	int a[5];
	int *p=a;
	input(a,5);
	shift(p,5,1);
	print(p,5);
}
void input(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter the numbers:");
		scanf("%d",&arr[i]);
	}
}
void print(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void shift(int* p,int size,int n)
{
	int i;
	while(n--)
	{
	for(i=0;i<size-1;i++)
	{
		p[i] = p[i+1];
	}
	p[i]=0;
	}
}
