/*-------------------------------------------------------------------------------------------------------------------------------
MaxArray.c
Program to find the maximum number in an array and also find its location
DIVYA RAJ K
25-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
main()
{
	int X[30],N,i,Max,Loc;
	
	system("clear");

	printf("Program to find the maximum number in an array and also find its location\n\n");
	printf("Enter the number of elements: ");
	scanf("%d",&N);
	printf("Enter %d numbers:\n",N);
	for(i=1;i<=N;i++){
		scanf("%d",&X[i]);
	}
	
	Max=X[1];
	Loc=1;
	
	for(i=2;i<=N;i++){
		if(X[i]>Max){
			Max=X[i];
			Loc=i;
		}
	}
	
	printf("\nThe entered numbers are:\n");
	for(i=1;i<=N;i++){
		printf("%d\t",X[i]);
	}
	printf("\n\nThe maximum number is %d and location is %d",Max,Loc);
}