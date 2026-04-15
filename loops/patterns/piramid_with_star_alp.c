#include<stdio.h>
int main()
{
    int r,c,n,s,k;
    printf("Enter the no;");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        int a=65;
        for(s=1;s<=n-r;s++){
                printf(" ");
            }
            
        for(c=1;c<=2*r-1;c++)
        {
            if(c%2)
            {
                
                printf("%c",a++);
            }
            else
            {
            printf("*");
            }
        }
        printf("\n");
    }
}
