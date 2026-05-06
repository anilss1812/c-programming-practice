#include<stdio.h>
#include<string.h>

int main()
{
	char str1[10];
	char str2[10];
	printf("Enter the string:");
	fgets(str1,10,stdin);
	/*if(str1[strlen(str1)-1]=='\n')
	{
		str1[strlen(str1)-1] = '\0';
	}*/
	strncpy(str2,str1,5);
	str2[5] = '\0';
	puts(str2);

}
