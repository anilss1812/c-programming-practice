#include<stdio.h>

int main()
{
	int i=20.5;
	float f=20.4;
	int result;
	result=i==f;
	printf("%d...%f\n",result,result);
	result=(float)i==f; 
	printf("%d...%d\n",result,result);
	result=i<f;
	printf("%d...%d\n",result,result);
	result=i<(int)f;
	printf("%d...%d\n",result,result);

	return 0;
}
