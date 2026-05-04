#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	printf("Enter the string:");
	fgets(str,50,stdin);
	int len=strlen(str);
	if(str[len-1] == '\n')
	{
		str[len-1]='\0';
		len--;
	}
	puts(str);
	printf("%d",len);
}
