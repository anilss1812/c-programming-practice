#include<stdio.h>
void input(int*,const int);
void output(int*,const int);
void b_sort(int*,const int);
int main()
{
	int arr[5];
	int *p = arr;
	input(p,5);
	b_sort(p,5);
	output(p,5);
}
void input(int* arr,const int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("Enter the array numbers:");
		scanf("%d",&arr[i]);
	}
}
void output(int* arr,const int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void b_sort(int* arr,const int size)
{
	int i,j;
	for(i=1;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
			int temp;
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			}
		}
	}

}
