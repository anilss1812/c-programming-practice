#include<stdio.h>
void inputmarks(float*,int);
void printmarks(float*,int);
float totalmarks(float*,int);
void printgrade(float);

int main()
{
	float sub[6];
	float perct,total;
	inputmarks(sub,6);
	printmarks(sub,6);
	total=totalmarks(sub,6);
	perct = total/6;
	printgrade(perct);
	

}

void inputmarks(float* m,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter a each subject marks:");
		scanf("%f",&m[i]);
	}
}
void printmarks(float* m,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%.2f ",m[i]);
	}
	printf("\n");
}
float totalmarks(float* m,int size)
{
	int tot;
	for(int i=0;i<size;i++)
	{
		tot += m[i];
	}
	return tot;
}
void printgrade(float per)
{
	if(per >=95 && per <= 100)
	{
		printf("%.2f Your Grade Is A+",per);
	}
	else if(per >= 85 && per <= 94)
	{
		printf("%.2f Your Grade Is A",per);
	}
	else if(per >= 75 && per <= 84)
	{
		printf("%.2f Your Grade Is B",per);
	}
	else if(per >= 65 && per <= 74)
	{
		printf("%.2f Your Grade Is C",per);
	}
	else if(per >= 55 && per <= 64)
	{
		printf("%.2f Your Grade Is D",per);
	}
        else if(per >= 45 && per<= 54)
	{
		printf("%.2f Your Grade Is E",per);
	}
	else
	{
		printf("%.2f Your Grade Is F",per);
	}	

}
