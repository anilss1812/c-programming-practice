#include <stdio.h>
#define pi 3.14
int main()
{
 int rad;
 float area,circumference;
 printf("Enter radius:");
 scanf("%d",&rad);
 area=pi*rad*rad;
 circumference = 2*pi*rad;
 printf("area=%01f\n",area);
 printf("circumference=%01f\n",circumference);
 return 0;

}
