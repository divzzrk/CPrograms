/*-------------------------------------------------------------------------------------------------------------------------------
cpyarray.c
Program to copy the contents of one array to another array
DIVYA RAJ K
22-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
main()
{
	int X[30],Y[30],N,i,j;
	
	system("clear");

	printf("Program to copy the contents of one array to another array\n\n");
	printf("Enter the number of elements: ");
	scanf("%d",&N);
	printf("Enter %d numbers:\n",N);
	for(i=1;i<=N;i++){
		scanf("%d",&X[i]);
	}
	for(i=1;i<=N;i++){
		Y[i]=X[i];
	}
	printf("\nThe contents of first array are:\n");
	for(i=1;i<=N;i++){
		printf("%d\t",X[i]);
	}
	printf("\nThe contents of second array are:\n");
	for(i=1;i<=N;i++){
		printf("%d\t",Y[i]);
	}
}