#include<stdio.h>

void Input(int*,const int);
void Print(int*,const int);
void ins(int*,const int,const int,int);

int main()
{
	int n,in,val;
	printf("enter the size:");
	scanf("%d",&n);
	int arr[n];
	Input(arr,n);
	Print(arr,n);
	printf("Enter the index to delete:");
	scanf("%d",&in);
	printf("Enter the value want to insert:");
	scanf("%d",&val);
	ins(arr,n,in,val);
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
void ins(int* arr,const int size,const int in)
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
	for(i=in;i<size-1;i++);
	{
		//printf("%d\n",i);
		arr[i]=arr[i+1];
	}
}



