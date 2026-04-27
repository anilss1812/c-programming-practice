#include<stdio.h>
int input(int*,int);
int output(int*,int);
int rotate(int*,int,int);
int main()
{
        int Ht;
	int arr[5];
        int *p=arr;
        input(p,5);
	printf("Enter How many Times to rotate:");
	scanf("%d",&Ht);
        rotate(p,5,Ht);
        output(p,5);

}
int input(int* arr,int size)
{
        for(int i=0;i<size;i++)
        {
                printf("Enter the array elements:");
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
        while(htimes--)
        {
        temp = arr[0];
        for(i=0;i<size-1;i++)
        {
                arr[i] = arr[i+1];
        }
        arr[i] = temp;
        }
}
