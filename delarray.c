/*-------------------------------------------------------------------------------------------------------------------------------
delarray.c
Program to delete a particular number in an array
DIVYA RAJ K
22-09-2018
---------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
#include<math.h>
main()
{
	int X[30],N,i,j,Temp,Search,Flag=0,Loc;
	
	system("clear");

	printf("Program to delete a particular number in an array\n\n");
	printf("Enter the number of elements: ");
	scanf("%d",&N);
	printf("Enter %d numbers:\n",N);
	for(i=1;i<=N;i++){
		scanf("%d",&X[i]);
	}
	printf("\nEnter the element that you have to delete from the array: ");
	scanf("%d",&Search);
	for(i=1;i<=N;i++){
		if(Search==X[i]){
			Flag=1;
			Loc=i;
			break;
		}
	}
	if(Flag==1){
		printf("nThe element is present in the array at location %d",Loc);
		for(i=Loc;i<=(N-1);i++){
			X[i]=X[i+1];
		}
		printf("\nThe array after deleting the particular element %d is\n",Search);
		for(i=1;i<=(N-1);i++){
			printf("%d\t",X[i]);
		}
	}
	else{
		printf("\nSorry! The entered element is not present in the array");
	}
}