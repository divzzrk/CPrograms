/*-------------------------------------------------------------------------------------------------------------------------------
StdDev.c
Program to calculate the variance and standard deviation of n numbers
DIVYA RAJ K
25-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
//----------------------------------prototype---------------------------------------------
void fnInputArray(int N,int A[30]);
float fnCalcVar(int N,int X[30]);
void fnPrintResult(int N,int A[30],float Var,float StdDev);
main()
{
	int X[30],SumX=0,SumXSqr=0,N,i;
	float Avg,T1,T2,Variance,StdDev;
	
	system("clear");

	printf("Program to calculate the variance and standard deviation of entered n numbers\n\n");
	printf("Enter the number of elements: ");
	scanf("%d",&N);
	printf("Enter %d numbers:\n",N);
	fnInputArray(N,X);
	Variance=fnCalcVar(N,X);
	StdDev=sqrt(Variance);
	printf("\nThe entered numbers are:\n");
	fnPrintResult(N,X,Variance,StdDev);
}
//----------------------------------fnInputArray---------------------------------------------
void fnInputArray(int N,int A[30])
{
	int i;
	for(i=1;i<=N;i++){
		scanf("%d",&A[i]);
	}
}
//----------------------------------fnCalcVar---------------------------------------------
float fnCalcVar(int N,int X[30])
{
	int i,SumX=0,SumXSqr=0;
	float Avg,T1,T2,Variance;
	for(i=1;i<=N;i++){
		SumX=SumX+X[i];
		SumXSqr=SumXSqr+(X[i]*X[i]);
	}
	
	Avg=SumX/N;
	T2=Avg*Avg;
	T1=SumXSqr/N;
	Variance=T1-T2;
	return Variance;
}
//----------------------------------fnPrintResult---------------------------------------------
void fnPrintResult(int N,int A[30],float Var,float StdDev)
{
	int i;
	for(i=1;i<=N;i++){
		printf("%d\t",A[i]);
	}
	printf("\n\nThe variance is: %.2f",Var);
	printf("\nThe Standard Deviation is: %.2f",StdDev);
}