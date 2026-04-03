#include<stdio.h>
int main()
{
	int r,c,n,s;

	printf("Enter the value:");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(s=1;s<=n-r;s++)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			if(c==1 || c==r)
			{

				printf("* ");

			}
			else
			{
				printf("  ");
				
			}
		}
		printf("\n");
	  }

	 for(r=1;r<=n-1;r++)
         {
                for(s=1;s<=r;s++)
                {
                        printf(" ");
                }
                for(c=1;c<=r;c++)
                {
                        if(c==1 || c==r)
                        {

                                printf("* ");

                        }
                        else
                        {
                                printf(" ");

                        }
                }
                printf("\n");
           }
}
