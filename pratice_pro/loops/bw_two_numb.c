#include<stdio.h>
int main()
{       
        int i,n;
        printf("Enter first number:");
        scanf("%d",&i);
        printf("Enter second number:");
        scanf("%d",&n);
	i++;
        while(i<n)
        {
                printf("%d\n",i);
                i++;
        }
        return 0;
}    
