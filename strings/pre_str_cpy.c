#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20],str2[20];
	printf("Enter the string:");
	fgets(str1,20,stdin);
	puts(str1);
	strcpy(str2,str1);
	puts(str2);
}
