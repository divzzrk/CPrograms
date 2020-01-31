/*---------------------------------------------------------------------------------------
LowTri.c
Program to find the lower triangular elements of a matrix
DIVYA RAJ.K
16-10-18
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
main()
{
	int A[20][20],M,i,j;
	
	system("clear");
	
	printf("Program to find the lower triangular elements of a matrix\n");
	printf("\nEnter the number of rows or columns of the matrix: ");
	scanf("%d",&M);
	printf("\nEnter %d elements of first matrix:\n",M*M);
	for(i=1;i<=M;i++){
		for(j=1;j<=M;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nThe elements of the first matrix are:\n");
	for(i=1;i<=M;i++){
		for(j=1;j<=M;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf("\nThe elements of the lower triangular matrix are:\n");
	for(i=2;i<=M;i++){
		for(j=1;j<=i-1;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}