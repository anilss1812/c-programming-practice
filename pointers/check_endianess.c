#include<stdio.h>
int main()
{
	short int num=1;
	//int num=0x01;
	char *p=&num;
	if(*p)
	{
		printf("Littel Endianess\n");
	}
	else
	{
		printf("Big Endianess\n");
	}
}
