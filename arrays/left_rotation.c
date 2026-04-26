#include<stdio.h>
int input(int*,int);
int output(int*,int);
int rotate(int*,int,int);
int main()
{
	int arr[5];
	int *p=arr;
	input(p,5);
	rotate(p,5,1);
	output(p,5);

}
int input(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter the array elements");
		scanf("%d",&arr[i]);
	}
}
int output(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
int rotate(int* arr,int size,int htimes)
{      int temp,i;
	temp = arr[1];
	while(htimes--)
	{
	for(i=0;i<size;i++)
	{
		arr[i] = arr[i+1];
	}
	arr[i] = temp;
	}
}
