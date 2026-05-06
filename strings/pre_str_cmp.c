#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20];
	char str2[20];
	printf("Enter the string1:");
	fgets(str1,20,stdin);
	printf("Enter the string2:");
	fgets(str2,20,stdin);
	int res=strcmp(str1,str2);
	if(res)
	{
		printf("both are not same");
	}
	else
	{
		printf("Both are same");
	}
}
