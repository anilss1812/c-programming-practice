#include<stdio.h>
int main()
{
	int num,i,cnt=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0){
			cnt++;
		}
	}
	if(cnt==2)
	{
		printf("%d is the prime no",num);
	}
	else{
		printf("%d not a prime",num);
	}
	return 0;
}

		

