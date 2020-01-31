/*-------------------------------------------------------------------------------------------------------------------------------
VarStdDev.c
Program to calculate the variance and standard deviation of five numbers
DIVYA RAJ K
07-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
main()
{
	int X1,X2,X3,X4,X5,SumX,SumXSqr;
	float Avg,T1,T2,Variance,StdDev;
	
	system("clear");

	printf("Program to calculate the variance and standard deviation of entered 5 numbers\n\n");
	printf("Enter 5 numbers:\n");
	scanf("%d%d%d%d%d",&X1,&X2,&X3,&X4,&X5);
	
	SumX=X1+X2+X3+X4+X5;
	Avg=SumX/5.0;
	T2=Avg*Avg;
	SumXSqr=(X1*X1)+(X2*X2)+(X3*X3)+(X4*X4)+(X5*X5);
	T1=SumXSqr/5.0;
	Variance=T1-T2;
	StdDev=sqrt(Variance);

	printf("\nThe variance is: %.2f",Variance);
	printf("\nThe Standard Deviation is: %.2f",StdDev);
}