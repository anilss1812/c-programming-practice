#include<stdio.h>

int main()
{
	int ch='*';
	ch=ch^32;
	printf("%d..%c\n",ch,ch);
	ch=ch^32;
	printf("%d..%c\n",ch,ch);
	ch=ch^32;
	printf("%d..%c\n",ch,ch);
	return 0;
}
