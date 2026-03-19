#include<stdio.h>
int main()
{
int a=10,b,c,d,e;
printf("%d\n",a);
b=++a;
printf("%d..%d\n",b,a);
c=a++;
printf("%d..%d\n",c,a);
d=--a;
printf("%d..%d\n",d,a);
e=a--;
printf("%d..%d\n",e,a);
return 0;
}
