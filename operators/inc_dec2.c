#include<stdio.h>
int main()
{
	int x=1;
	printf("%d\n",++x + x++ + ++x + x++);
	return 0;
}
