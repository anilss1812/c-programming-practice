#include<stdio.h>

void Input(int*,const int);
void print(int*,const int);
void shist(int*,const int);


int main()
{
	int arr[5];
	Input(arr,5);
	print(arr,5);
	shist(arr,5);

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
void shist(int* arr,const int size)
{
	int fh=-1,sh=-1,i;
	for(i=0;i<size;i++)
	{
		if(fh<arr[i])
		{
			sh = fh;
			fh = arr[i];
		}	
		else if(sh < arr[i] && fh != arr[i])
		{
			sh = arr[i];
		}
	}
	printf("The second highest number is %d \n",sh);
}
