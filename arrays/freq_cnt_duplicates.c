#include<stdio.h>
#include<string.h>

void Input(int*,const int);
void Print(int*,int);
void F_Dup(int*,int);
int check_dup(int*,int,int);
int main()
{
	int num,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	Input(arr,n);
	Print(arr,n);
	F_Dup(arr,n);

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
int check_dup(int* arr,int size,int i)
{
	for(int k=i-1;k>=0;k--)
	{
		if(arr[i]==arr[k])
		{
			return 0;
		}
		
	}
		return 1;
}
void F_Dup(int* arr,int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{	int cnt=0;
		if(check_dup(arr,size,i))
		{
			for(j=i;j<size;j++)
			{
				if(arr[i]==arr[j])
				cnt++;
			}
			printf("count of %d  is %d\n",arr[i],cnt);
		}	
	}
	
}
