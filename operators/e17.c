#include<stdio.h>

int main()
{
	char ch;
	printf("Enter a alphabet:");
	scanf("%c",&ch);
	(ch>=64 && ch<=90)?printf("%c is %c",ch,ch+32):(ch>=97 && ch <=122)?printf("%c is %c",ch,ch-32):printf("Non alphabet");
	return 0;
}
