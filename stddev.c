/*-------------------------------------------------------------------------------------------------------------------------------
StdDev.c
Program to calculate the variance and standard deviation of n numbers
DIVYA RAJ K
25-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
main()
{
	int X[30],SumX=0,SumXSqr=0,N,i;
	float Avg,T1,T2,Variance,StdDev;
	
	system("clear");

	printf("Program to calculate the variance and standard deviation of entered n numbers\n\n");
	printf("Enter the number of elements: ");
	scanf("%d",&N);
	printf("Enter %d numbers:\n",N);
	for(i=1;i<=N;i++){
		scanf("%d",&X[i]);
	}
	
	for(i=1;i<=N;i++){
		SumX=SumX+X[i];
		SumXSqr=SumXSqr+(X[i]*X[i]);
	}
	
	Avg=SumX/N;
	T2=Avg*Avg;
	T1=SumXSqr/N;
	Variance=T1-T2;
	StdDev=sqrt(Variance);

	printf("\nThe entered numbers are:\n");
	for(i=1;i<=N;i++){
		printf("%d\t",X[i]);
	}
	printf("\n\nThe variance is: %.2f",Variance);
	printf("\nThe Standard Deviation is: %.2f",StdDev);
}