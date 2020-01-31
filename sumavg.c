/*----------------------------------------------------------------------------------------------------------------------------------------------------------
SumAvg.c
Program to enter n numbers and find the sum and average of those using the concept of arrays
DIVYA RAJ K
25-09-2018
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
main()
{
	int X[30],i,N,Sum;
	float Avg;
	
	system("clear");

	printf("Program to enter n numbers and find the sum and average of those using the concept of arrays\n");
	printf("\nEnter the value of n:\n");
	scanf("%d",&N);
	printf("Enter %d values:\n",N);
	
	for(i=1;i<=N;i++){
		scanf("%d",&X[i]);
	}
	
	Sum=1;
	
	printf("\nSum = ");
	for(i=1;i<=N;i++){
		Sum=Sum+X[i];
		if(i==N)
			printf(" %d ",X[i]);
		else
			printf(" %d + ",X[i]);
		
	}
	printf(" = %d",Sum);
	
	Avg=Sum/N;
	
	printf("\nAverage = %d/%d = %.3f",Sum,N,Avg);
}