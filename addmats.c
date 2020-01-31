/*-------------------------------------------------------------------------------------------------------------------------------
AddMats.c
Program to input n numbers into an M*N matrix and to find the sum of these two matrices
181713
25-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
//----------------------------------prototype---------------------------------------------
void fnInputMat(int N,int M,int A[10][10]);
void fnAddMats(int N,int M,int A[10][10],int B[10][10],int C[10][10]);
void fnPrintMat(int N,int M,int A[10][10]);
main()
{
	int M,N,X[10][10],Y[10][10],Z[10][10];
	
	system("clear");

	printf("Program to input n numbers into an M*N matrix and to find the sum of these two matrices\n\n");
	printf("Enter the number of rows and columns of the matrix: ");
	scanf("%d%d",&M,&N);
	printf("Enter %d elements of the first matrix:\n",M*N);
	fnInputMat(N,M,X);
	printf("\nEnter %d elements of the second matrix:\n",M*N);
	fnInputMat(N,M,Y);
	fnAddMats(N,M,X,Y,Z);
	printf("\nFirst matrix:\n");
	fnPrintMat(N,M,X);
	printf("\nSecond matrix:\n");
	fnPrintMat(N,M,Y);
	printf("\nThe sum of the two matrices are:\n");
	fnPrintMat(N,M,Z);
}
//----------------------------------fnInputMat---------------------------------------------
void fnInputMat(int N,int M,int A[10][10])
{
	int i,j;
	for(i=1;i<=M;i++){
		for(j=1;j<=N;j++){
			scanf("%d",&A[i][j]);
		}
	}
}
//----------------------------------fnAddMats---------------------------------------------
void fnAddMats(int N,int M,int A[10][10],int B[10][10],int C[10][10])
{
	int i,j;
	for(i=1;i<=M;i++){
		for(j=1;j<=N;j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
}	
//----------------------------------fnPrintMat---------------------------------------------
void fnPrintMat(int N,int M,int A[10][10])
{
	int i,j;
	for(i=1;i<=M;i++){
		for(j=1;j<=N;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}