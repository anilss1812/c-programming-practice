#include<stdio.h>
int check_endianess();
int convert_Littel_Big(int*);

int main()
{
	int num=0x12345678;
	printf("%x\n",num);
	char *p = &num;
	printf("%x\n",*p);
	if(check_endianess())
	{
		convert_Littel_Big(&num);
	}

	printf("%x\n",*p);

}
int check_endianess(int)
{
	short int num=1;
	//int num=0x01;
	char *p=&num;
	if(*p)
	{
		return 1;
	}
	return 0;
}
int convert_Littel_Big(int* n)
{
	char *p=n;
	char t,j,i;
	for(i=0,j=3;i<j;i++,j--)
	{
		t=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=t;
	}
	printf("%x\n",*n);

}
