#include<stdio.h>

int fact(int);

int main()
{
        int num;
        printf("ENter the number:");

        scanf("%d",&num);

         if(fact(num)==num)
        {
                printf("The give number is strong number");
        }
        else
                printf("the given number not a strong  number");

}
int fact(int n)
{
        int last,fat,sum=0;

        while(n>0)
        {
        last = n%10;
            fat =1;

                for(int i=1;i<=last;i++)
                {
                        fat *= i;

                }
                        sum = sum+fat;
                        n /= 10;
        }
        return sum;
}		
		

