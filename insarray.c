/*-------------------------------------------------------------------------------------------------------------------------------
insarray.c
Program to insert a particular number in a particular position in an array
DIVYA RAJ K
22-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
main()
{
	int X[30],N,i,j,Temp,Ele,Loc;
	
	system("clear");

	printf("Program to insert a particular number in a particular position in an array\n\n");
	printf("Enter the number of elements: ");
	scanf("%d",&N);
	printf("Enter %d numbers:\n",N);
	for(i=1;i<=N;i++){
		scanf("%d",&X[i]);
	}
	printf("\nEnter the position at which you have to enter an element: ");
	scanf("%d",&Loc);
	if(Loc<=(N+1)){
		printf("\nEnter the element that you have to insert to the position %d: ",Loc);
		scanf("%d",&Ele);
		for(i=N+1;i>Loc;i--){
			X[i]=X[i-1];
		}
		X[Loc]=Ele;
		printf("\nThe elements of the array after inserting element %d to location %d is\n",Ele,Loc);
		for(i=1;i<=(N+1);i++){
			printf("%d\n",X[i]);
		}
	}
	else{
		printf("\nSorry! You cant insert an element to that location");
	}
}