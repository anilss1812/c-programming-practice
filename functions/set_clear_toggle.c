#include<stdio.h>
#include<stdlib.h>

void printBin(int);
int setBit(int,int);
int clearBit(int,int);
int toggleBit(int,int);
int main()
{	
	while(1)
	{
	int num,bitpos,in;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("Enter the bit position:");
	scanf("%d",&bitpos);
	printf("Enter your choice:\n1 for set bit \n2 for clear bit\n3 for toggle a bit\n4 for exit:\n");
	scanf("%d",&in);
	switch(in)
	{
		case 1: printBin(num);
			num=setBit(num,bitpos);
			printBin(num);
			break;
		case 2: printBin(num);
			num=clearBit(num,bitpos);
			printBin(num);
			break;
		case 3: printBin(num);
			num=toggleBit(num,bitpos);
			printBin(num);
			break;
		case 4: exit(0);
	}
	
	}

}


void printBin(int a)
{
	for(int i=31;i>=0;i--)
	{
		if(a&(1<<i))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}printf("\n");
}                                                                                                                                                         
int setBit(int num,int bitpos)
{
	num |= (1<<bitpos);

	return num;
}

int clearBit(int num,int bitpos)
{
	num &= ~(1<<bitpos);
	return num;
}

int toggleBit(int num,int bitpos)
{
	num ^= (1<<bitpos);
	return num;
}



