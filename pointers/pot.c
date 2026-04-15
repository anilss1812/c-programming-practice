#include<stdio.h>
int main()
{
	int x=1;
	char *ptr=(char*)&x;
	printf("ptr=%d &ptr=%d *ptr=%d x=%d &x=%d",ptr,&ptr,*ptr,x,&x);
}

