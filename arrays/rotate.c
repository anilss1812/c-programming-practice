#include<stdio.h>
#include<stdio_ext.h>
void Insert(int*,const int );
void Print(int* ,const int );
void L_Rotate(int* ,const int ,int);
void R_Rotate(int* ,const int ,int);

int main()
{
	int n,ele_s,tim;
	char ch;
	printf("Enter the size:");
	scanf("%d",&n);
	int arr[n];
	ele_s = sizeof(arr)/sizeof(arr[0]);
	Insert(arr,ele_s);
	Print(arr,ele_s);
	printf("Enter how many times rotate:");
	scanf("%d",&tim);
	printf("l:Left , r:right\n");
	__fpurge(stdin);
	scanf("%c",&ch);
	if(ch=='l')
	{
		L_Rotate(arr,ele_s,tim);
		Print(arr,ele_s);
	}
	else if(ch=='r')
	{
		R_Rotate(arr,ele_s,tim);
		Print(arr,ele_s);
	}
	
}

void Insert(int* a,int ele_s)
{
	int i;
	for(i=0;i<ele_s;i++)
	{
		printf("Enter the element-%d:",i+1);
		scanf("%d",&a[i]);
	}
}
void Print(int* a,int ele_s)
{
	int i;
	for(i=0;i<ele_s;i++)
	{
		printf("%d ",a[i]);
	}printf("\n");
}

void L_Rotate(int* a,const int ele_s,int tim)
{
	int temp,i;
	while(tim--)
	{
		temp = a[0];
		for(i=0;i<ele_s;i++)
		{
			a[i] = a[i+1];
		}
		a[i-1] = temp;
	}

}

void R_Rotate(int* a,const int ele_s,int tim)
{
	int i,temp;
	while(tim--)
	{
		temp = a[ele_s-1];
		for(i=ele_s-1;i>0;i--)
		{
			a[i] = a[i-1];
		}
		a[i] = temp;
	}
}

