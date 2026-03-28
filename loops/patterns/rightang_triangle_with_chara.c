#include<stdio.h>
int main()
{
	int i,j,num,ch;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++,printf("\n"))
	{
		if(i%2)
                                ch='A';
                                //printf("%c",64+j);
                       
                        else
                        {
                                ch='a';
                                //printf("%c",96+j);
                        }

		for(j=1;j<=i;j++)
		{
		
			printf("%c",ch++);
		}
	}
	return 0;
}


