#include<stdio.h>

void Input(int*,const int);
void Print(int*,const int);
void Del(int*,const int,const int);

int main()
{
	int n,in;
	printf("enter the size:");
	scanf("%d",&n);
	int arr[n];
	Input(arr,n);
	Print(arr,n);
	printf("Enter the index to delete:");
	scanf("%d",&in);
	Del(arr,n,in);
	Print(arr,n-1);

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
void Del(int* arr,const int size,const int in)
{
	int i,j,temp;
	/*for(i=0;i<size;i++)
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
	}*/
	temp=arr[in];
	for(i=in;i<size-1;i++);
	{
		//printf("%d\n",i);
		arr[i]=arr[i+1];
	}
}



