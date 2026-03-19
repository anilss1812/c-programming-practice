#include <stdio.h>
int main()
{
signed short int v1=0,v2=32767;
printf("v1=%hd..\n",v1);
--v1;
printf("v1=%hd..\n",v1);
++v1;
printf("v1=%hd..\n",v1);
printf("v2=%hd..\n",v2);
++v2;

v2=32767;
printf("v2=%hu..\n",v2);
--v2;
printf("v2=%hu..\n",v2);
unsigned long int var=0;
printf("v2=%lu..\n",var);
--var;

printf("v2=%lu..\n",var);
return 0;
}

