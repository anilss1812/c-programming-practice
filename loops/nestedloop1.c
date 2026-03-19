#include<stdio.h>
int main()
{
	int i,j;
	printf("Hello\n");
	for (i=0;i<5;i++)
	{
		printf("vector in loop1\n");
		for(j=0;j<3;j++)
		{
			printf("vector in loop 2\n");
		}
		printf("vector in loop 1-2\n");
	}
	printf("vector in outer\n");
	return 0;
}
