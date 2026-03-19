#include<stdio.h>
int main()
{
	 int i,n;
	 printf("Enter a first number");
	 scanf("%d",&i);
	 printf("Enter a second number");
	 scanf("%d",&n);
	 if(i%2==1)
	 {
		 i++;
	 }
	 while(i<=n)
	 {
		 printf("%d\n",i);
		 i=i+2;

	 }
	 return 0;
}
