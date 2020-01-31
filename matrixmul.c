/*---------------------------------------------------------------------------------------
MatrixSum.c
Program to find the product of two matrices
DIVYA RAJ.K
12-10-18
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
main()
{
	int X[20][20],Y[20][20],Z[20][20],M1,N1,M2,N2,i,j,k;
	
	system("clear");
	
	printf("Program to find the product of 2 matrices\n");
	printf("\nEnter the number of rows and columns of first matrix:\n");
	scanf("%d%d",&M1,&N1);
	printf("\nEnter the number of rows and columns of second matrix:\n");
	scanf("%d%d",&M2,&N2);
	
	if(N1!=M2)
		printf("\nMatrix multiplication not possible!");
	else{
		printf("\nEnter %d elements of first matrix:\n",M1*N1);
		for(i=1;i<=M1;i++){
			for(j=1;j<=N1;j++){
				scanf("%d",&X[i][j]);
			}
		}
		printf("\nEnter %d elements of second matrix:\n",M2*N2);
		for(i=1;i<=M2;i++){
			for(j=1;j<=N2;j++){
				scanf("%d",&Y[i][j]);
			}
		}
		for(i=1;i<=M1;i++){
			for(j=1;j<=N2;j++){
				Z[i][j]=0;
				for(k=1;k<=N1;k++){
					Z[i][j]=Z[i][j]+(X[i][k]*Y[k][j]);
				}
			}
		}
		printf("\nThe elements of the first matrix are:\n");
		for(i=1;i<=M1;i++){
			for(j=1;j<=N1;j++){
				printf("%d\t",X[i][j]);
			}
			printf("\n");
		}
		printf("\nThe elements of the second matrix are:\n");
		for(i=1;i<=M2;i++){
			for(j=1;j<=N2;j++){
				printf("%d\t",Y[i][j]);
			}
			printf("\n");
		}
		printf("\nThe elements of the third matrix are:\n");
		for(i=1;i<=M1;i++){
			for(j=1;j<=N2;j++){
				printf("%d\t",Z[i][j]);
			}
			printf("\n");
		}
	}
}