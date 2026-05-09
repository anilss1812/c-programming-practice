#include<stdio.h>

void Input(int*,const int);
void Print(int*,const int);
void Dup(int*,const int);

int main()
{
	int arr[5];
	Input(arr,5);
	Print(arr,5);
	Dup(arr,5);

}

void Input(int* arr,const int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter the element-%d:",i+1);
		scanf("%d",&arr[i]);
	}
}
void Print(int* arr,const int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void Dup(int* arr,const int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		int isdup =0;
		for(j=0;j < i;j++)
		{
			if(arr[i]==arr[j])
			{
				isdup = 1;
				break;
			}
		}
		if(isdup==0)
		{
			printf("%d ",arr[i]);
		}
	}
}



