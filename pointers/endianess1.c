#include<stdio.h>
int main()
{
	int num=1234;
	char *p=&num;
	printf("%d\n",num);
	printf("%d\n",*p);
	printf("%p\n",p);
	p++;
	printf("%d\n",*p);
	printf("%p\n",p);
}
