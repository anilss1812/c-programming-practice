#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=3,i<=4;i++)
	{
		printf("vector in loop1\n");
		if(i==1){
			continue;
		}
		printf("vector inloop1 after if-1\n");
		if(i==3){
			break;
		}
		for(j=0;j<3;j++)
		{
			printf("inner loop\n");
			if(j==0){
				continue;
			}
			printf("inner loop afterif-1\n");
			if(j==2){
				break;
			}
		}
		printf("vector loop1-2\n");
	}
	printf("out of the loops\n");
	return 0;
}


