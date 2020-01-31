/*---------------------------------------------------------------------------------------
MaxEle.c
Program to find the maximum element in a matrix
DIVYA RAJ.K
12-10-18
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
main()
{
	int X[20][20],M,N,i,j,Max,Row=1,Col=1;
	
	system("clear");
	
	printf("Program to find the maximum element in a matrix\n");
	printf("\nEnter the number of rows: ");
	scanf("%d",&M);
	printf("\nEnter the number of columns: ");
	scanf("%d",&N);
	
	printf("Enter %d elements:\n",M*N);
	for(i=1;i<=M;i++){
		for(j=1;j<=N;j++){
			scanf("%d",&X[i][j]);
		}
	}
	Max=X[1][1];
	for(i=1;i<=M;i++){
		for(j=1;j<=N;j++){
			if(Max<X[i][j]){
				Max=X[i][j];
				Row=i;
				Col=j;
			}
		}
	}
	printf("\nThe elements of the matrix are:\n");
	for(i=1;i<=M;i++){
		for(j=1;j<=N;j++){
			printf("%d\t",X[i][j]);
		}
		printf("\n");
	}
	printf("\nThe maximum number is %d present at row %d and column %d",Max,Row,Col);
}