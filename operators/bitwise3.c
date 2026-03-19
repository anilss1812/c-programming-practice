#include<stdio.h>
int main()

{
	unsigned int x;
	x=(64>>(2+1-2))&(~(1<<2));
	printf("%d\n",x);
}
