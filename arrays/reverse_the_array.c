#include<stdio.h>
void input(int*,int);
void display(int*,int);
void rev(int*,int);

int main()
{
	int a[5];
	int size = (sizeof(a)/(sizeof(a[0])));
	input(a,size);
	display(a,size);
	rev(a,size);
}
void input(int* p,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter thr numbers:");
		scanf("%d",&p[i]);
	}
}
void display(int*p,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ,",p[i]);
	}
	printf("\n");
}
void rev(int* p,int size)
{
	for(int i=size-1;i>=0;i--)
	{
		printf("%d ,",p[i]);
	}
	printf("\n"); 
}
