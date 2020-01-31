/*-------------------------------------------------------------------------------------------------------------------------------
MulMats.c
Program to input n numbers into an M*N matrix and to find the product of these two matrices
181713
25-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
//----------------------------------prototype---------------------------------------------
void fnInputMat(int M,int N,int A[10][10]);
void fnMulMats(int M,int N,int O,int P,int A[10][10],int B[10][10],int C[10][10]);
void fnPrintMat(int M,int N,int A[10][10]);
main()
{
	int M1,N1,M2,N2,X[10][10],Y[10][10],Z[10][10];
	
	system("clear");

	printf("Program to input n numbers into an M*N matrix and to find the product of these two matrices\n\n");
	printf("Enter the number of rows and columns of the first matrix: ");
	scanf("%d%d",&M1,&N1);
	printf("Enter the number of rows and columns of the second matrix: ");
	scanf("%d%d",&M2,&N2);
	printf("Enter %d elements of the first matrix:\n",M1*N1);
	fnInputMat(M1,N1,X);
	printf("\nEnter %d elements of the second matrix:\n",M2*N2);
	fnInputMat(M2,M2,Y);
	fnMulMats(N1,M1,N2,M2,X,Y,Z);
	printf("\nFirst matrix:\n");
	fnPrintMat(M1,N1,X);
	printf("\nSecond matrix:\n");
	fnPrintMat(M2,N2,Y);
	printf("\nThe product of the two matrices are:\n");
	fnPrintMat(M1,N2,Z);
}
//----------------------------------fnInputMat---------------------------------------------
void fnInputMat(int M,int N,int A[10][10])
{
	int i,j;
	for(i=1;i<=M;i++){
		for(j=1;j<=N;j++){
			scanf("%d",&A[i][j]);
		}
	}
}
//----------------------------------fnMulMats---------------------------------------------
void fnMulMats(int M,int N,int O,int P,int A[10][10],int B[10][10],int C[10][10])
{
	int i,j,k;
	for(i=1;i<=M;i++){
		for(j=1;j<=P;j++){
			C[i][j]=0;
			for(k=1;k<=N;k++){
				C[i][j]=C[i][j]+(A[i][k]+B[k][j]);
			}
		}
	}
}	
//----------------------------------fnPrintMat---------------------------------------------
void fnPrintMat(int M,int N,int A[10][10])
{
	int i,j;
	for(i=1;i<=M;i++){
		for(j=1;j<=N;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}