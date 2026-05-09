#include<stdio.h>

void Input(int*,const int);
void print(int*,const int);
void Fhist(int*,const int);


int main()
{
	int arr[5];
	Input(arr,5);
	print(arr,5);
	Fhist(arr,5);

}
void Input(int* arr,const int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter the elements %d:",i+1);
		scanf("%d",&arr[i]);
	}
}
void print(int* arr,const int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}printf("\n");
}
void Fhist(int* arr,const int size)
{
	int k=0,i;
	for(i=0;i<size;i++)
	{
		if(arr[i]>k)
		{
			k = arr[i];
		}	
	}
	printf("The first highest number is %d \n",k);
}
