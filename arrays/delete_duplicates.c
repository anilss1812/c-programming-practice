#include<stdio.h>
#include<string.h>

void Input(int*,const int);
void Print(int*,int);
void Dup(int*,int*);

int main()
{
	int num,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	//n= sizeof(arr)/sizeof(arr[0]);
	Input(arr,n);
	Print(arr,n);
	int *p_size = &n;
	Dup(arr,p_size);
	Print(arr,n);

}

void Input(int* arr,const int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter the element-%d:",i+1);
		scanf("%d",&arr[i]);
	}
}
void Print(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void Dup(int* arr,int* size)
{
	int i,j;
	for(i=0;i<*size;i++)
	{
		for(j=i+1;j < *size;j++)
		{
			if(arr[i]==arr[j])
			{
				memmove(arr+j,arr+j+1,(*size-(j+1))*sizeof(int));
				(*size)--;
				j--;
			}
		}
	}
}



