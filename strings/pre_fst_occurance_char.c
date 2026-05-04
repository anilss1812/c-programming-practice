#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	char ch;
	printf("Enter the string:");
	fgets(str,20,stdin);
	printf("Enter the character:");
	scanf("%c",&ch);
	if(strchr(str,ch) != NULL)
	{
		printf("The given character is present");
	}

}
