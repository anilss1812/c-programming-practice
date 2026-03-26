/*Write a C program to determine eligibility for admission to a professional course based on the following
criteria: Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 
Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible. Expected Output : The candidate is not eligible for admission.*/

#include<stdio.h>
int main()
{
	int mat,phy,chem,tot;
	printf("Enter the maths marks:");
	scanf("%d",&mat);
	printf("Enter the physics marks:");
	scanf("%d",&phy);
	printf("Enter the chemistry marks:");
	scanf("%d",&chem);
	tot=mat+phy+chem;
	if(mat >= 65 && phy >= 55 && chem >= 50  && tot >=190 || mat+phy >= 140)
	{
		printf("You eligible for admission\n");
	}
	else
		printf("You not eligible for admision\n");
	return 0;
}

