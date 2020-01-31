/*-------------------------------------------------------------------------------------------------------------------
ArrayFunction.c
Program to input numbers in an array, print contents of an array and find the average of the contents of the array
DIVYA RAJ.K
16-10-18
---------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
//----------------------------------prototype---------------------------------------------
void fnInputArray(int N,int A[30]);
void fnPrintArray(int N,int A[30]);
float fnAvg(int N,int A[30]);
main()
{
	int X[30],N;
	float Avg;
	
	system("clear");
	
	printf("Program to input numbers in an array, print contents of an array and find the average of the contents of the array\n");
	printf("Enter the number of elements in the array: ");
	scanf("%d",&N);
	printf("Enter the elements of the array:\n");
	fnInputArray(N,X);
	printf("\nThe elements of the array are:\n");
	fnPrintArray(N,X);
	Avg=fnAvg(N,X);
	printf("\nThe average of %d elements are %.2f",N,Avg);
}

//----------------------------------fnInputArray---------------------------------------------
void fnInputArray(int N,int A[30])
{
	int i;
	for(i=1;i<=N;i++){
		scanf("%d",&A[i]);
	}
}
//----------------------------------fnPrintArray---------------------------------------------
void fnPrintArray(int N,int A[30])
{
	int i;
	for(i=1;i<=N;i++){
		printf("%d\t",A[i]);
	}
}
//----------------------------------fnAvg---------------------------------------------
float fnAvg(int N,int A[30])
{
	int i,Sum=0;
	float Avg;
	for(i=1;i<=N;i++){
		Sum=Sum+A[i];
	}
	Avg=(float)Sum/N;
	return Avg;
}		