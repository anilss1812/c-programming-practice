#include <stdio.h>
#include <stdlib.h>
void fun2(void);

void fun1(void);

int fun0()
{
 printf("hello from f0\n");
 fun1();
 printf("in f0\n");
 fun2();
 printf("bye from f0\n");
exit(0);
}

void fun1(void)
{
 printf("hello from fun1\n");
 fun2();
 printf("bye from fun1\n");

}

void fun2(void)
{
printf("hello from fun2\n");

}
