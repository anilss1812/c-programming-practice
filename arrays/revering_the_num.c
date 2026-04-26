#include<stdio.h>
void input(int*,int);
void rev(int*,int);
void print(int*,int);
int main()
{
	int a[5];
	int *p=a;
	input(a,5);
	rev(p,5);
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
void rev(int* p,int size)
{
	int i,j,temp;
	for(i=0,j=size-1;i<j;i++,j--)
	{
		temp = p[i];
		p[i] = p[j];
		p[j] = temp;
	}
}
