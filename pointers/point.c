#include<stdio.h>
int main()
{
	//char ch='s';
	int ch=125;
	double val=2.5;
//	char *c=&ch;
	int *c=&ch;
	double *d=&val;
//	c++;
//	i++;
	//d++;
	//printf("char=%c,num=%d,val=%f,int=%p, char=%p,double=%p",*c,*i,*d,&i,&c,&d);
	printf("%d %p %p %p",ch,*c+1,&ch+1,c);
}

