#include<stdio.h>
void swap(int*,int*);
int main()
{
	int n1,n2;
	printf("Enter  the values of n1 and n2:");
	scanf("%d%d",&n1,&n2);
	swap(&n1,&n2);
	printf("%d %d",n1,n2);

}
void swap(int* n1,int* n2)
{
	int t;
	t = *n1;
	*n1 = *n2;
	*n2 = t;
}
