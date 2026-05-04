#include<stdio.h>
void print_arr(int*,const int);
void read_arr(int*,const int);
void arr_cpy(int*,int*,const int);
int main()
{
	int arr1[10];
	int arr2[10];
	read_arr(arr1,10);
	print_arr(arr1,10);
	arr_cpy(arr1,arr2,10);
	print_arr(arr2,10);


}
void print_arr(int* arr,const int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void read_arr(int* arr,const int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("Enter the elements:");
		scanf("%d",&arr[i]);
	}
}
void arr_cpy(int* arr1,int* arr2,const int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		arr2[i]=arr1[i];
	}
}




