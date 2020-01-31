/*---------------------------------------------------------------------------------------
MatrixSum.c
Program to find the sum of two matrices
DIVYA RAJ.K
12-10-18
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
main()
{
	int A[20][20],B[20][20],C[20][20],M1,N1,M2,N2,i,j;
	
	system("clear");
	
	printf("Program to find the sum of 2 matrices\n");
	printf("\nEnter the number of rows and columns of first matrix: ");
	scanf("%d%d",&M1,&N1);
	printf("\nEnter the number of rows and columns of second matrix: ");
	scanf("%d%d",&M2,&N2);
	
	if(M1!=M2 && N1!=N2)
		printf("\nMatrix addition not possible!");
	else{
		printf("\nEnter %d elements of first matrix:\n",M1*N1);
		for(i=1;i<=M1;i++){
			for(j=1;j<=N1;j++){
				scanf("%d",&A[i][j]);
			}
		}
		printf("\nEnter %d elements of second matrix:\n",M2*N2);
		for(i=1;i<=M2;i++){
			for(j=1;j<=N2;j++){
				scanf("%d",&B[i][j]);
			}
		}
		for(i=1;i<=M1;i++){
			for(j=1;j<=N2;j++){
				C[i][j]=A[i][j]+B[i][j];
			}
		}
		printf("\nThe elements of first matrix are\n");
		for(i=1;i<=M1;i++){
			for(j=1;j<=N2;j++){
				printf("%d\t",A[i][j]);
			}
			printf("\n");
		}
		printf("The elements of second matrix are\n");
		for(i=1;i<=M1;i++){
			for(j=1;j<=N2;j++){
				printf("%d\t",B[i][j]);
			}
			printf("\n");
		}
		printf("The sum of two matrices are\n");
		for(i=1;i<=M1;i++){
			for(j=1;j<=N2;j++){
				printf("%d\t",C[i][j]);
			}
			printf("\n");
		}
	}
}