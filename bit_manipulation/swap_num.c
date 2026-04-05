#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two number a and b:\n");
	scanf("%d%d",&a,&b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("Swaped Number are:\na=%d b=%d\n",a,b);
}
	
