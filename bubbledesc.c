/*-------------------------------------------------------------------------------------------------------------------------------
bubbledesc.c
Program to sort n numbers in descending order using bubble sort
DIVYA RAJ K
22-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
main()
{
	int X[30],N,i,j,Temp;
	
	system("clear");

	printf("Program to sort n numbers in descending order using bubble sort\n\n");
	printf("Enter the number of elements: ");
	scanf("%d",&N);
	printf("Enter %d numbers:\n",N);
	for(i=1;i<=N;i++){
		scanf("%d",&X[i]);
	}
	
	for(i=1;i<=(N-1);i++){
		for(j=1;j<=(N-i);j++){
			if(X[j]<X[j+1]){
				Temp=X[j];
				X[j]=X[j+1];
				X[j+1]=Temp;
			}
		}
	}
	
	printf("\nThe entered numbers after sorting in descending order are:\n");
	for(i=1;i<=N;i++){
		printf("%d\t",X[i]);
	}
}