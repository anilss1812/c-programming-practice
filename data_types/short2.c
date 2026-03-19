#include<stdio.h>

int main()
{
  short int s1=1234,s2=5678;
  printf("s1:%d... s2=%d:\n",s1,s2);
  printf("Enter intger for s1:\n");
  scanf("%hd",&s2);
  printf("Enter intger for s2:\n");
  scanf("%hd",&s1);
  printf("s1:%d... s2=%d:\n",s1,s2);
  return 0;
}
