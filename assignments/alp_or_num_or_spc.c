//Write a C Program to check the given character input is Alphabet or Digit or Special Symbol
#include<stdio.h>
int main()
{
	char var;
	printf("Enter any interals:");
	scanf("%c",&var);
	if(var<='a'&& var >= 'z' && var<= 'A' var >= 'Z')
	{
		printf("%c is Alphabet",var);
	}
	else if(var <= '0' && var >= '9'){
		printf("%c is digit",var);
	}
	else
		printf("%c is special symbol",var);
	return 0;
}
