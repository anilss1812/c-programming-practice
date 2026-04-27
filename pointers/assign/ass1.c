#include<stdio.h>

int main()
{
int a = 0x12345678;
 char*p=&a;
 ++p;
 printf("%x\n",*(short int*)p);
 ++p;
 printf("%x\n",*(short int*)p);
 printf("%x\n", *p);
}
