#include<stdio.h>

int main()

{
	int x=50;
	float y=25.5;
	int r1=x+y;
	float r2=x+(int)y;
	printf("%d..\n",r1);
	printf("%f..\n",r2);
	return 0;
}
