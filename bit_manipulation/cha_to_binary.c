#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the charater:");
	scanf("%c",&ch);
	printf("%d is your ascci value of given char:\t",ch);
	for(int i=sizeof(ch)*8-1;i>=0;i--)
	{
		if(ch&(1<<i))
		{
			printf("%d",1);
		}
		else
		{
			printf("%d",0);
		}
	}
	printf("\n");
	return 0;
}

