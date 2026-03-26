#include<stdio.h>
int main()
{
	int num,value=0,var=9,temp;
	printf("Enter the value:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		value=num%10;
		if(var>=value)
		{
			var=value;
		}
		else
		{
			break;
		}
		num=num/10;
	}
	if(num==0){
	
		printf("%d is in the assending order\n",temp);
	}
	else{
		printf("%d is not in assending order\n",temp);
	}
	return 0;
}

