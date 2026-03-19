//sum of given digits

#include<stdio.h>
int main()
{
	 int num,sum=0,c=0;
	 printf("Enter the number:");
	 scanf("%d",&num);
	 while(num>0)
	 {
		sum += num%10;
		num = num/10;
		c++;
	 }
	 printf("%d number of digits you entered\n",c);
	 printf("%d is your sum of given digits\n",sum);
	 return 0;

}
